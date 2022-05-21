#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    int N;
    cin >> N;
    vector<int> d(N);
    REP(i,N) cin >> d[i];

    sort(d.begin(), d.end());

    int mid = N/2;

    int ans;

    if(d[mid] == d[mid-1]){
        ans = 0;
    }
    else{
        ans = d[mid] - d[mid-1];
    }

    cout << ans << endl;
}