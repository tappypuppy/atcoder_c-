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
    vvi A(2,vi(N));

    REP(i,2){
        REP(j,N) cin >> A[i][j];
    }

    vvi dp(2, vi(N,0));

    dp[0][0] = A[0][0];
    dp[1][0] = dp[0][0]+A[1][0];
    
    REP(i,2){
        FOR(j,1,N-1){
            if(i==0){
                dp[i][j] = dp[i][j-1] + A[i][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + A[i][j];
            }
        }
    }

    cout << dp[1][N-1] << endl;
}