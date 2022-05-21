#include <bits/stdc++.h>
using namespace std;

int main(){
    int MOD = pow(10,9) + 7;
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(6));

    for(int i=0; i<N; i++){
        for(int j=0; j<6; j++){
            cin >> A.at(i).at(j);
        }
    }

    vector<int> sum_row(N,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<6; j++){
            sum_row.at(i) += A.at(i).at(j);
        }
    }

    long long ans = 1;
    for(int i=0 ; i<N; i++){
        ans *= sum_row.at(i);
        ans %= MOD;
    }

    cout << ans << endl;
}