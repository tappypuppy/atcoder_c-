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
    vll A(N);
    REP(i,N) cin >> A[i];

    vll v(N+1,0);
    REP(i,N){
        v[A[i]]++;
    }

    ll sum = 0;

    REP(i,N+1){
        if(v[i] == 0 || v[i] == 1){
            continue;
        }
        sum += v[i]*(v[i]-1)/2;
    }

    REP(i,N){
        ll sum_i;
        sum_i = sum - (v[A[i]]-1);
        cout << sum_i << endl;
    }
}