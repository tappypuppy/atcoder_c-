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
    ll N,T;
    cin >> N >> T;
    vll t(N);
    REP(i,N) cin >> t[i];

    ll ts=t[0];
    ll sum = 0;

    FOR(i,1,N-1){
        if(ts+T <= t[i]){
            sum += T;
        }
        else{
            sum += t[i] - ts;
        }
        ts = t[i];
    }

    cout << sum+T << endl;

}