#include <bits/stdc++.h>
using namespace std;

long long MOD = pow(10,9) + 7;


long long binpower(long long a, long long b){
    long long ans = 1;
    while(b != 0){
        if(b%2 == 1){
            ans = ans * a %MOD;
        }

        a = a*a %MOD;
        b = b/2;
    }

    return ans;
}

int main(){
    long long N,K;
    cin >> N >> K;

    long long a = K-2;
    long long b = N-2;

    long long ans;

    if(N == 1){
        cout << K << endl;
    }
    else if((K == 1 && N > 1) || (K == 2 && N > 2) ){
        cout << 0 << endl;
    }
    else if(K == 2 && N == 2){
        cout << 2 << endl;

    }
    else{
        ans =( K * (K-1) )%MOD;
        ans = ans * binpower(a,b) % MOD;
        cout << ans << endl;
    }

}