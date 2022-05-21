#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF64 9223372036854775807
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)

int main(){
    ll a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    ll price = INF64;

    //A B
    price = min(price, a*x+b*y);

    //A C
    if(x>y) price = min(price, a*(x-y)+c*2*y);

    //B C
    if(y>x) price = min(price,b*(y-x) + c*2*x);

    //C
    price = min(price, c*2*max(x,y));

    cout << price << endl;
}