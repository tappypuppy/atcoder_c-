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
    vi a(N);
    REP(i,N) cin >> a[i];

    int cnt2,cnt4;
    cnt2 = cnt4 = 0;

    REP(i,N){
        if(a[i] % 2 == 0 && a[i] % 4 != 0){
            cnt2++;
        }
        if(a[i] % 4 == 0){
            cnt4++;
        }
    }

    bool f = false;

    if(cnt4*2+1 >= N) f = true;
    if(cnt4*2 + cnt2 >= N) f = true;

    if(f)cout << "Yes" << endl;
    else cout << "No" << endl;
}