#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    ll N,K;
    cin >> N >> K;

    ll amari;
    amari = N%K;

    ll ans = min(amari, K-amari);

    cout << ans << endl;
}