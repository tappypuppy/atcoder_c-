#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    REP(i,H) cin >> S[i];

    vvi a(H+2, vi (W+2,0));

    FOR(i,1,H){
        FOR(j,1,W){
            if(S[i-1][j-1] == '#'){
                a[i-1][j-1]++;
                a[i-1][j]++;
                a[i-1][j+1]++;
                a[i][j-1]++;
                a[i][j+1]++;
                a[i+1][j-1]++;
                a[i+1][j]++;
                a[i+1][j+1]++;
            }
        }
    }


    FOR(i,1,H){
        FOR(j,1,W){
            if(S[i-1][j-1] == '#'){
                cout << '#';
            }
            else{
                cout << a[i][j];
            }
        }

        cout << endl;
    }
}