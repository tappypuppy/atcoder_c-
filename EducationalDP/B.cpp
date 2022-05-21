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
    int N,K;
    cin >> N >> K;
    vi h(N);
    REP(i,N) cin >> h[i];

    vi dp(N,INF32);
    dp[0] = 0;

    FOR(i,1,N-1){
        int idx;
        (i >= K) ? idx = K : idx = i;
        FOR(j,0,idx){
            dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
        }
    }

    cout << dp[N-1] << endl;
}