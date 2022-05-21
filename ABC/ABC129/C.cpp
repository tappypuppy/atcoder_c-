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
    ll N,M;
    cin >> N >> M;
    vll a(M);
    REP(i,M) cin >> a[i];

    ll MOD = 1000000007;

    set<ll> aset;
    REP(i,M) aset.insert(a[i]);

    vll dp(N+1,0);
    dp[0] = 1;
    if(aset.count(1)) dp[1] = 0;
    else dp[1] = 1;

    for(int i=2;i<=N;i++){
        if(aset.count(i)) continue;

        dp[i] = dp[i-1]+ dp[i-2];
        dp[i] %= MOD;
    }

    cout << dp[N] << endl;
}