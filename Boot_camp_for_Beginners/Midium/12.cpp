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

    vector<vector<char>> a(H, vector<char> (W));

    REP(i,H){
        REP(j,W) cin >> a[i][j];
    }

    vector<vector<bool>> flag(H, vector<bool>(W, false));

    //gyo kakunin
    REP(i,H){
        int cnt = 0;
        REP(j,W){
            if(a[i][j] == '.') cnt++;
        }

        if(cnt == W){
            REP(j,W) flag[i][j] = true;
        }
    }

    //retu kakunin
    REP(j,W){
        int cnt = 0;
        REP(i,H){
            if(a[i][j] == '.') cnt++;
        }

        if(cnt == H){
            REP(i,H) flag[i][j] = true;
        }
    }

    REP(i,H){
        int cnt = 0;
        REP(j,W){
            if(!flag[i][j]){
                cout << a[i][j];
            }
            else cnt++;
        }

        if(cnt != W) cout << endl;
    }
}