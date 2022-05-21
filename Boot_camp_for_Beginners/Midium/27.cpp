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
    string s,t;
    cin >> s >> t;

    int ssize,tsize;
    ssize = s.size();
    tsize = t.size();

    int ans = ssize + tsize;

    REP(i,ssize){
        if(ssize - i > tsize) continue;

        string ssub = s.substr(i);
        string tsub = t.substr(0,ssize-i);

        if(ssub == tsub){
            int tmp = ssize + tsize - ((int)ssub.size());
            ans = min(ans,tmp);
        }
    }

    cout << ans << endl;
}