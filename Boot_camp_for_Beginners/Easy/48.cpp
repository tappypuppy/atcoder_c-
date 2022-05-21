#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)

int main(){
    int N;
    cin >> N;
    vi H(N);
    REP(i,N) cin >> H[i];

    int cnt = 0;
    int ans = 0;

    FOR(i,0,N-2){
        if(H[i] >= H[i+1]){
            cnt++;
        }
        else{
            ans = max(ans,cnt);
            cnt = 0;
        }
    }

    ans = max(ans,cnt);

    cout << ans << endl;
}