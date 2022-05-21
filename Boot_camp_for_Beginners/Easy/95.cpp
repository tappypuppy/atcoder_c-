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
    int A,B,C;
    cin >> A >> B >> C;

    vi v(3);
    v[0] = A;
    v[1] = B;
    v[2] = C;

    sort(v.begin(),v.end());

    int a,b,c;
    a = v[0];
    b = v[1];
    c = v[2];

    int cnt = 0;
 
    if(a%2 == b%2){
        cnt += (b - a)/2;
        cnt += c - b;
    }
    else{
        b++;
        c++;
        cnt++;
        cnt += (b-a)/2;
        cnt += c - b;
    }

    cout << cnt << endl;


}