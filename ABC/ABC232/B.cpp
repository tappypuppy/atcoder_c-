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
    string S,T;
    cin >> S >> T;

    string samp;
    samp = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    int S_size = (int)S.size();
    int T_size = (int)T.size();
    vi S_num(S_size);
    vi T_num(T_size);

    REP(i,S_size){
        REP(j,26){
            if(S[i] == samp[j]){
                S_num[i] = j;
            }
            if(T[i] == samp[j]){
                T_num[i] = j;
            }
        }

        if(T_num[i]  - S_num[i] < 0){
            T_num[i] += 26;
        }
    }

    bool f = true;

    int res = T_num[0] - S_num[0];

    REP(i,S_size){
        if(T_num[i] - S_num[i] != res){
            f = false;
        }
    }

    if(f){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;



}