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
    int K;
    cin >> K;

    int N = (int)S.size();

    vi sum(N+1,0);

    REP(i,N){
        if(S[i] == '.') sum[i+1] =  sum[i] + 1;
        else sum[i+1] = sum[i];
    }

    int r=0;
    int ans = 0;

    REP(l,N){
        while(r <N && sum[r+1]- sum[l] <= K){
            r++;
        }
        ans = max(ans,(int)(r-l));
    }
    cout << ans << endl;
    // [l,r)
}