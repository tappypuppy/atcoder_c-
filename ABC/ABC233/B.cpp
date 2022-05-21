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
    int L,R;
    cin >> L >> R;
    L--;
    R--;
    string S;
    cin >> S;
    
    if(L != 0){
        REP(i,L){
            cout << S[i];
        }
    }

    for(int i=R; i>= L; i--){
        cout << S[i];
    }
    if(R != (int)S.size()){
        for(int i=R+1; i<(int)S.size(); i++){
            cout << S[i];
        }
    }

    cout << endl;
}