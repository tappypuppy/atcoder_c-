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
    string S;
    cin >> S;
    int N = (int)S.size();

    vi a(N+1,0), b(N+1,0);

    REP(i,N){
        if(S[i] == '<'){
            a[i+1] = a[i] + 1;
        }
    }

    for(int i=N-1;i >= 0; i--){
        if(S[i] == '>'){
            b[i] = b[i+1] + 1;
        }
    }

    ll sum = 0;

    REP(i,N+1){
        sum += max(a[i],b[i]);
    }

    cout << sum << endl;
}