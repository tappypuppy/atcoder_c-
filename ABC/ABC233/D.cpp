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
    ll N,K;
    cin >> N >> K;
    vll A(N);
    REP(i,N){
        cin >> A[i];
    }

    vll sum(N,0);
    sum[0] = A[0];
    FOR(i,1,N-1){
        sum[i] = sum[i-1] + A[i];
    }

    sort(sum.begin(), sum.end());

    ll cnt = 0;


    ll r = 0;
    for(ll l = 0; l<N; l++){
        ll res = 0;
        while(r < N){
            res = sum[r] - sum[l];

            if(res == K) cnt++;
            
            if(res > K) break;
            r++;
        }

        if(r == l) r++;
    }

    REP(i,N){
        if(sum[i] == K) cnt++;
    }

    cout << cnt << endl;
}