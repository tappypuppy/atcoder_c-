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
    vi a(N), b(N), c(N);
    REP(i,N) cin >> a[i] >> b[i] >> c[i];

    vvi dp(N,vi(3,0));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    FOR(i,1,N-1){
        dp[i][0] = max(dp[i-1][1] + a[i], dp[i-1][2] + a[i]);
        dp[i][1] = max(dp[i-1][0] + b[i], dp[i-1][2] + b[i]);
        dp[i][2] = max(dp[i-1][0] + c[i], dp[i-1][1] + c[i]);
    }

    cout << max(dp[N-1][0],max(dp[N-1][1], dp[N-1][2])) << endl;
}