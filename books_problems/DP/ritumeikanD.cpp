#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<long long> a(N);
    for(int i=0;i<N;i++) cin >> a.at(i);

    vector<vector<double>> f(N+1, vector<double>(N+1));

    //[j,i)
    for(int i=1; i<=N; i++){
        for(int j=0; j<i; j++){
            double sum =0;
            for(int k=j; k<i; k++){
                sum += a.at(k);
            }

            f[j][i] = sum/(i - j);
        }
    }

    vector<vector<double>> dp(N+1,vector<double>(M+1,0.0));

    for(int i=0; i<= N; i++){
        for(int j=0; j< i; j++){
            for(int k=1; k<=M; k++){
                dp[i][k] = max(dp[i][k], dp[j][k-1] + f[j][i]);
            }
        }
    }

    double res = 0;

    for(int m=0; m <= M ; m++) res = max(res, dp[N][m]);


    cout << setprecision(10) << res << endl;
}