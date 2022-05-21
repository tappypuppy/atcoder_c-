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
    vll A(N+1),B(N);

    REP(i,N+1) cin >> A[i];
    REP(i,N) cin >> B[i];

    ll cnt = 0;
    REP(i,N){
        if(A[i] < B[i]){
            cnt += A[i];
            B[i] -= A[i];

            if(A[i+1] <= B[i]){
                cnt += A[i+1];
                A[i+1] -= A[i+1];
            }
            else{
                cnt += B[i];
                A[i+1] -= B[i];
            }
        }
        else{
            cnt += B[i];
        }
    }

    cout << cnt << endl;
}