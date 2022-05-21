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
    int N,M;
    cin >> N >> M;
    vll a(N),b(N),c(M),d(M);
    REP(i,N) cin >> a[i] >> b[i];
    REP(i,M) cin >> c[i] >> d[i];


    REP(i,N){
        ll mindist = INF64;
        ll minidx = INF64;
        REP(j,M){
            ll dist_ij = abs(a[i]-c[j]) + abs(b[i] - d[j]);
            if(mindist > dist_ij){
                mindist = dist_ij;
                minidx = j+1;
            }
        }

        cout << minidx << endl;
    }
}