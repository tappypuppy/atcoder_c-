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
    int X;
    cin >> X;

    int N, amari;
    N = (int)X/100;
    amari = X%100;

    int cnt = 0;

    for(int i=5; i>0; i--){
        cnt += (int)amari/i;
        amari %= i;
    }

    int ans;

    (cnt <=N) ? ans = 1 : ans =0;

    cout << ans << endl;


}