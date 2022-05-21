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

    vi c(9,0);
    REP(i,N){
        int j = 1;
        while(j*400 < 4801){
            if(a[i] >= 3200){
                c[8]++;
                break;
            }
            if(a[i] < 400*j){
                c[j-1]++;
                break;
            }
            j++;
        }
    }

    int cnt = 0;
    REP(i,8){
        if(c[i] > 0) cnt++;
    }
    if(cnt == 0){
        cnt++;
        c[8]--;
    }
    cout << cnt << ' ' << cnt + c[8] << endl;
}