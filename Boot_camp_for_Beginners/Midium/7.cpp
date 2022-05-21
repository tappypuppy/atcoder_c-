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
    int N;
    cin >> N;
    string S;
    cin >> S;

    int L2,R1;

    R1 = 0;
    L2 = 1;

    int ma = 0;

    while(L2 <= N){
        set<char> s1,s2;
        REP(i,R1+1){
            s1.insert(S[i]);
        }

        FOR(i,L2,N){
            if(s1.count(S[i])){
                s2.insert(S[i]);
            }
        }

        ma = max(ma, (int)s2.size());

        R1++;
        L2++;
    }

    cout << ma << endl;
}