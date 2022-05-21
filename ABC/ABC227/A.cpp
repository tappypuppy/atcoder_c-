#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,A;
    cin >> N >> K >> A;

    int res = K%N;


    if(A + res - 1 <= N){
        int ans = A + res - 1;
        if(ans == 0) ans = N;
        cout << ans << endl;
    } 
    else{
         int res_2 = res - (N - A + 1);
         if(res_2 == 0) res_2 = N;
         cout << res_2 << endl;
    }
}