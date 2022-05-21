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
    ll N = S.size();
    vll sum(N);
    sum[0] = S[0] - '0';
    FOR(i,1,N-1){
        sum[i] = sum[i-1] + (S[i] - '0');
    }

    string ans = "";
    ll res = 0;

    for(int i=N-1; i>= 0; i--){
        ll tmp = sum[i] + res;
        ans = to_string(tmp %10) + ans;
        res = (int)tmp/10;

    }

    if(res != 0) ans = to_string(res) + ans;
    cout << ans << endl;
}