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
    string S;
    cin >> S;

    int N;
    N = (int)S.size();

    bool flag = false;

    string key = "keyence";

    if(S == key) flag = true;

    REP(i,N){
        FOR(j,i,N-1){
            if(N - (j-i+1) == 7){
                string w = "";
                FOR(k,0,i-1){
                    w += S[k];
                }
                FOR(k,j+1,N-1){
                    w += S[k];
                }

                if(w == key) flag = true;
            }
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}