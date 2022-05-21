#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    int N;
    cin >>N;
    vector<double> v(N);
    REP(i,N) cin >> v[i];

    sort(v.begin(), v.end());

    double ans = v[0];

    for(int i=1; i<N;i++){
        ans = (ans + v[i])/2;
    }

    cout << ans << endl;
}