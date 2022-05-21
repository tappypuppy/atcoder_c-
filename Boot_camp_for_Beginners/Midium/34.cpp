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
    vi A(N);
    REP(i,N) cin >> A[i];

    int idx1;
    REP(i,N){
        if(A[i] == 1) idx1 = i;
    }

    int L,R;
    L = idx1 - 0;
    R = N - idx1 - 1;

    int Lcnt,Rcnt,Lmod,Rmod;
    Lcnt = (int)L/(K-1);
    Rcnt = (int)R/(K-1);
    Lmod = L % (K-1);
    Rmod = R % (K-1);

    int ans = 0;
    ans += Lcnt + Rcnt;
    if(Lmod + Rmod > K -1) ans += 2;
    else if(Lmod + Rmod == 0) ans += 0;
    else ans++;

    cout << ans << endl;
}