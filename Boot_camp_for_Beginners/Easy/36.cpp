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
    int N,M;
    cin >> N >> M;

    vi L(M),R(M);
    REP(i,M) cin >> L[i] >> R[i];

    int left,right;
    left = 1;
    right = N;

    REP(i,M){
        if(left <= L[i]) left = L[i];
        if(right >= R[i]) right = R[i]; 
    }

    if(left <= right){
        cout << right - left + 1 << endl;
    }
    else{
        cout << 0 <<  endl;
    }
}