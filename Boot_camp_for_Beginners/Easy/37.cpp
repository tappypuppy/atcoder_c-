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
    int N,K,Q;
    cin >> N >> K >> Q;
    vi A(Q);
    REP(i,Q){
        int n;
        cin >> n;
        A[i] = n-1;
    }

    vi p(N, K-Q);

    REP(i,Q){
        p[A[i]]++;
    }

    REP(i,N){
        if(p[i] <=0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}