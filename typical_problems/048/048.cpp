#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;

    vector<long long> A(N), B(N);
    for(int i=0; i<N; i++) cin >> A.at(i) >> B.at(i);

    vector<long long> C(2*N);

    for(int i=0; i<N; i++){
        C.at(i) = A.at(i) - B.at(i);
        C.at(N+i) = B.at(i);
    } 

    sort(C.begin(), C.end());

    long long ans = 0;
    for(int i = 2*N-1; i>2*N-K-1; i-- ){
        ans += C.at(i);
    }

    cout << ans << endl;
}