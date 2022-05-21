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
    int A,B;
    cin >> A >> B;

    int ans = -1;

    REP(i,1001){
        int a = i*0.08;
        int b = i*0.1;

        if(a == A && b == B){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}