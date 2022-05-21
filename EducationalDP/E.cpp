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


    ll maxV = pow(10,5)+1;

    vvll dpw(N+1,vll(maxV,INF32));

    // dpw[i][j] = dpw[i-1][j] or dpw[i-1][j-v[i-1]] + w[i-1]

    ll ans = pow(10,5);

    // REP(i,maxV+1) dpw[0][i] = 0;

    dpw[0][0] = 0;


    FOR(i,1,N){
        FOR(j,0,maxV -1){
            if(j >= v[i-1]) dpw[i][j] = min(dpw[i-1][j] , dpw[i-1][j-v[i-1]] + w[i-1]);
            else dpw[i][j] = dpw[i-1][j];
        }
    }

    while(dpw[N][ans]>W)ans--;

    cout << ans << endl;




}
