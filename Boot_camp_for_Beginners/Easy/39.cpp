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
    int N;
    cin >> N;
    vi A(N),v(N);
    REP(i,N){
        cin >> A[i];
        v[i] = A[i];
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    REP(i,N){
        if(A[i] == v[0]){
            cout << v[1] << endl;
        }
        else{
            cout << v[0] << endl;
        }
    }

}