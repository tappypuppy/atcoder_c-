#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<long long> A(N+1, 0);
    for(int i=1; i<=N; i++) cin >> A.at(i);

    sort(A.begin(), A.end());

    long long cnt = 0;

    while(A.at(N-K+1) != 0){
        cnt += A.at(N-K+1);

        long long tmp = A.at(N-K+1);

        for(int i=N-K+1; i<=N; i++){
            A.at(i) -=  tmp;
        }

        sort(A.begin(), A.end());
    }

    cout << cnt << endl;
}