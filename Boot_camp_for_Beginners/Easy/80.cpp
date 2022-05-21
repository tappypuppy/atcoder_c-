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
    ll N;
    cin >> N;

    ll ma = 1;

    for(ll i=1; i*i <=N; i++){
        if(N%i == 0){
            ma = max(i,ma);
        }
    }

    ll ma2 = (ll)(N/ma);

    ll ans = (ma-1)+(ma2-1);

    cout << ans << endl;
}