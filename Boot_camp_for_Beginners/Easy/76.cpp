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
    vi p(M);
    vector<string> S(M);
    REP(i,M) cin >> p[i] >> S[i];

    vector<pair<bool,int>> v(N+1);

    //init
    REP(i,N+1){
        v[i].first = false;
        v[i].second = 0;
    }

    REP(i,M){
        if(v[p[i]].first) continue;
        if(S[i] == "WA"){
            v[p[i]].second++;
        } 
        else{
            v[p[i]].first = true;
        }
    }

    int ac = 0;
    int pe = 0;

    REP(i,N+1){
        if(v[i].first){
            ac++;
            pe += v[i].second;
        }
    }

    cout << ac << ' ' << pe << endl;
}