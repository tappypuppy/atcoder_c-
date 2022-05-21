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
    vector<vector<bool>> ab(N,vector<bool>(N,false)), cd(N,vector<bool>(N,false));

    REP(i,M){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        ab[a][b] = true;
        ab[b][a] = true;
    }
    REP(i,M){
        int c,d;
        cin >> c >> d;
        c--;
        d--;
        cd[c][d] = true;
        cd[d][c] = true;
    }

    vector<int> P(N);

    iota(P.begin(), P.end(),0);

    do{
        bool ok = true;
        REP(i,N){
            REP(j,N){
                if(ab[i][j] != cd[P[i]][P[j]]){
                    ok = false;
                }
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(P.begin(),P.end()));

    cout << "No" << endl;
}