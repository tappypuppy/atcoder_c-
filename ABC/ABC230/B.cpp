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

    int N = (int)S.size();

    string T1 = "oxxoxxoxxoxx";
    string T2 = "xxoxxoxxoxxo";
    string T3 = "xoxxoxxoxxox";

    int cnt = 0;

    bool flag = false;
    REP(i,N){
        if(T1[i] == S[i]) cnt++;
    }
    if(cnt == N) flag = true;

    cnt = 0;

    REP(i,N){
        if(T2[i] == S[i]) cnt++;
    }
    if(cnt == N) flag = true;

    cnt = 0;

    REP(i,N){
        if(T3[i] == S[i]) cnt++;
    }
    if(cnt == N) flag = true;

    if(flag){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}