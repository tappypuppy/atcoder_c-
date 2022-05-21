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
    vector<vector<char>> s(H,vector<char> (W));

    REP(i,H){
        REP(j,W){
            cin >> s[i][j];
        }
    }

    bool flag = true;

    REP(i,H){
        REP(j,W){
            if(s[i][j] == '#'){
                bool check = false;
                if(i>0){
                    if(s[i-1][j] == '#') check = true;
                }
                if(j>0){
                    if(s[i][j-1] == '#') check = true;
                }
                if(i<H-1){
                    if(s[i+1][j] == '#') check = true;
                }
                if(j<W-1){
                    if(s[i][j+1] == '#') check = true;
                }

                if(!check) flag = false;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;




}