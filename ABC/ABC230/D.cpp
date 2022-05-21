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
    int N,D;
    cin >> N >> D;

    vector<pair<int,int>> RL(N);

    // first:R second:L
    REP(i,N){
        cin>> RL[i].second >> RL[i].first;
    }

    sort(RL.begin(),RL.end());

    int cnt = 1;
    int i=1;

    int DpL = RL[0].first;
    int DpR = DpL + D - 1;

    while(i<N){
        if(RL[i].second > DpR ){
            cnt++;
            DpL = RL[i].first;
            DpR = DpL + D -1;
        }

        i++;
    }

    cout << cnt << endl;


}