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
    string s,t;
    cin >> s >> t;

    int sn = (int)s.size();
    int tn = (int)t.size();

    vvll dp(sn+1, vll (tn+1 ,0));

    // dp[i][j] = dp[i-1][j-1] + 1 or max(dp[i][j-1], dp[i-1][j])

    FOR(i,1,sn){
        FOR(j,1,tn){
            if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }

    int len = dp[sn][tn];

    vector<char> ans(len+1);

    int i = sn;
    int j = tn;

    while(len>0){
        if(s[i-1] == t[j-1]){
            ans[len] = s[i-1];
            i--;
            j--;
            len--;
        }
        else if(dp[i][j] == dp[i-1][j]){
            i--;
        }
        else {
            j--;
        }
    }

    FOR(i,1,dp[sn][tn]) cout << ans[i];
    cout << endl;
}