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
    int N;
    cin >> N;
    vi h(N);
    REP(i,N) cin >> h[i];

    vi dp(N,INF32);

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    // dp[i] = dp[i-1] + abs(h[i] - h[i-1]) or dp[i-2] + abs(h[i] - h[i-2])

    FOR(i,2,N-1){
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[N-1] << endl;

    
}