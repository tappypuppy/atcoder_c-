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
    cin >>N;
    vector<pair<int,int>> xy(N);
    REP(i,N) cin >> xy[i].first >> xy[i].second;

    sort(xy.begin(),xy.end());

    int cnt = 0;
    double dist_sum = 0.0;

    do{
        double dist = 0.0;
        REP(i,N-1){
            dist += sqrt( (xy[i].first - xy[i+1].first) * (xy[i].first - xy[i+1].first) + (xy[i].second - xy[i+1].second)*(xy[i].second - xy[i+1].second) );
        }
        dist_sum += dist;
        cnt++;

    }while(next_permutation(xy.begin(),xy.end()));

    double ans = dist_sum/cnt;

    cout << setprecision(15) << ans << endl;
}