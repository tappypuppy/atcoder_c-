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
    ll N,A,B;
    cin >> N >> A>> B;
    ll P,Q,R,S;
    cin >> P >> Q >>R >> S;

    ll k1R,k1L;
    k1L = max(1-A,1-B);
    k1R = min(N-A,N-B);

    ll k2R,k2L;
    k2L = max(1-A,B-N);
    k2R = min(N-A,B-1);

    for(ll h=P; h<=Q; h++){
        for(ll w=R; w<=S; w++){

            if((A-h) == (B-w)){
                if((h - A) >= k1L && (h-A) <= k1R){
                    cout << '#';
                }
                else{
                    cout  << '.';
                }
            }
            else if((h-A) == (B-w)){
                if((h-A) >= k2L && (h-A) <= k2R){
                    cout << '#' ;
                }
                else{
                    cout << '.';
                }
            }
            else cout << '.';

        }

        cout << endl;
    }
}