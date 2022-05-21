#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    int cnt = 0;

    int sqN  = pow(N, 0.5) + 1;

    long long i = 2;

    for(int j=i; j<= sqN ; j++){
        while(N % j == 0){
            cnt++;
            N /= j;
        }

        if(N == 1) break;

    }

    if(N != 1) cnt++;
    int ans = 0;

    while(pow(2,ans) < cnt){
        ans++;
    }
    
    cout << ans << endl;

}