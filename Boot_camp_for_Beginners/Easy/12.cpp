#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    int K,N;
    cin >> K >> N;
    vector<int> A(N);
    REP(i,N) cin >> A[i];

    int dist_max = 0;

    REP(i,N){
        dist_max = max(dist_max, A[i+1]- A[i]);
        if(i == N-1) dist_max = max(dist_max, A[0] + K - A[i]);
    }

    cout << K - dist_max << endl;


}