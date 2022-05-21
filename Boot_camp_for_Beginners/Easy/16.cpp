#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> A(N);

    REP(i,N){
        cin >> A[i].first;
        A[i].second = i;
    }

    sort(A.begin(), A.end());

    REP(i,N){
        cout << A[i].second+1 << ' ';
    }

    cout << endl;
}