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
    string s;
    cin >> s;
    int N = (int)s.size();

    vi ans(N,0);

    int Rcnt = 0;
    FOR(i,0,N-1){
        if(s[i] == 'R'){
            Rcnt++;
        }
        else{
            int r,l;
            if(Rcnt%2 ==0){
                r = Rcnt/2;
                l = Rcnt/2;
            }
            else{
                r = Rcnt/2 + 1;
                l = Rcnt/2;
            }

            ans[i-1] += r;
            ans[i] += l;

            Rcnt = 0;
        }
    }

    int Lcnt = 0;
    for(int i=N-1; i>=0; i--){
        if(s[i] == 'L'){
            Lcnt++;
        }
        else{
            int r,l;
            if(Lcnt%2 == 0){
                r = Lcnt/2;
                l = Lcnt/2;
            }
            else{
                r = Lcnt/2;
                l = Lcnt/2 + 1;
            }

            ans[i] += r;
            ans[i+1] += l;

            Lcnt = 0;
        }
    }

    REP(i,N){
        cout << ans[i] << ' ';
    }

    cout << endl;
}