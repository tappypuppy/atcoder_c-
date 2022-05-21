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
    ll N,W;
    cin >> N >> W;
    vll w(N), v(N);
    REP(i,N) cin >> w[i] >> v[i];

    vvll dp(N+1,vll(W+1,0));

    // dp[i][j] = dp[i-1][j] or dp[i-1][j-w[i-1]] + v[i-1]

    FOR(i,1,N){
        FOR(j,0,W){
            dp[i][j] = dp[i-1][j];
            if(j-w[i-1] >= 0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]] + v[i-1]);
            }
        }
    }

    cout << dp[N][W] << endl;
    

}