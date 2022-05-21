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
    string S;
    cin >> S;
    int N = (int)S.size() - 1;

    int ma=0;

    while(N >= 1){
        
        if(N != 1 && N%2 == 1){
            N--;
            continue;
        }

        int cnt = 0;

        for(int i=0; 2*i < N ; i++){
            if(S[i] == S[i+(int)N/2]) cnt++;
        }
        if(cnt == N/2) {
            ma = N; 
            break;
        }

        N--;

    }

    cout << ma << endl;
}