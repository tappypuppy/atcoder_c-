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
    vi H(N);
    REP(i,N) cin >> H[i];

    H[0] -= 1;

    REP(i,N-1){
        if(H[i] <= H[i+1]-1){
            H[i+1]--;
        }
    }

    bool flag = true;

    REP(i,N-1){
        if(H[i] > H[i+1]) flag = false;
    }

    (flag) ? cout << "Yes" << endl : cout << "No" << endl;
}