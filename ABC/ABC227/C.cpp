#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long root3N = pow(N, 1/3) + 1;
    long long root3N = pow(N, 1/2) + 1;

    long long cnt = 0;

    for(int i=1; i<=root3N; i++){
        for(int j=i; j<= root2N; j++){
            for(int k=j; k<= N; k++){
                long long tmp = i*j*k;
                if(tmp <= N) cnt++;
            }
        }
    }

    cout << cnt  << endl;
}