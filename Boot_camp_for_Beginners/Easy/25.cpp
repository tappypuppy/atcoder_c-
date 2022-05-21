#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    int N;
    cin >>N;
    vector<int> P(N),Q(N), v(N);
    REP(i,N) cin >> P[i];
    REP(i,N) cin >> Q[i];
    REP(i,N) v[i] = i+1;

    int a,b;
    int docnt = 0;

    do{
        docnt++;
        int acnt = 0;
        int bcnt = 0;

        REP(i,N){
            if(v[i] == P[i]) acnt++;
            if(v[i] == Q[i]) bcnt++;
        }

        if(acnt == N) a = docnt;
        if(bcnt == N) b = docnt;
    }while(next_permutation(v.begin(), v.end()));
    
    cout << abs(a-b) << endl;
}