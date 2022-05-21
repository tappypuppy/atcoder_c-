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
    vi a(N);
    REP(i,N) cin >> a[i];

    int ans = -1;

    int num = 0;

    REP(i,N){
        if(a[i] == num+1) num++;
    }

    if(num == 0){
        ans = -1;
    }
    else{
        ans = N - num;
    }

    cout << ans << endl;
}