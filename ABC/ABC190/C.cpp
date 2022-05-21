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
    vi A(M),B(M);
    REP(i,M) cin >> A[i] >> B[i];

    int K;
    cin >> K;
    vi C(K), D(K);
    REP(i,K) cin >> C[i] >> D[i];

    int ma = 0;

    for(int bit=0; bit < (1<<K); bit++){
        vector<bool> flag(N+1,false);
        int cnt = 0;

        REP(i,K){
            if(bit & (1<<i) ){
                flag[D[i]] = true;
            }
            else flag[C[i]] = true;
        }

        REP(i,M){
            if(flag[A[i]] == true && flag[B[i]] == true) cnt++;
        }

        ma = max(ma,cnt);
    }

    cout << ma << endl;
}