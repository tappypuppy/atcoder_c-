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
    vi t(N),x(N),y(N);
    REP(i,N) cin >> t[i] >> x[i] >> y[i];

    //(0,0) start
    int xs,ys,ts;
    xs = 0;
    ys = 0;
    ts = 0;

    bool flag = true;

    REP(i,N){
        int tdiff, ddiff;
        tdiff = t[i] - ts;
        ddiff = abs(x[i] - xs) + abs(y[i] - ys);

        if(tdiff  < ddiff) flag = false;

        int tres;
        tres = tdiff - ddiff;

        if(tres % 2 != 0) flag = false;

        xs = x[i];
        ys = y[i];
        ts = t[i];
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;


}