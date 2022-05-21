#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;

    vector<int> A(N+1,0);
    for(int i=1; i<=N; i++) cin >> A.at(i);

    set<int> cnt;

    cnt.insert(X);

    int next_A = A.at(X);

    while(!cnt.count(next_A)){
        cnt.insert(next_A);
        next_A = A.at(next_A);
    }

    cout << cnt.size() << endl;
}