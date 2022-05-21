#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<vector<int>> P(N, vector<int>(3));
    vector<int> sum(N,0);
    vector<int> rank(N,0);

    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            cin >> P.at(i).at(j);
            sum.at(i) += P.at(i).at(j);
            rank.at(i) += P.at(i).at(j);
        }
    }

    sort(rank.begin(), rank.end());

    int K_points = rank.at(N-K);

    for(int i=0;i<N;i++){
        if(sum.at(i) + 300 < K_points) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

}