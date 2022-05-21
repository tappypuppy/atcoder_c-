#include <bits/stdc++.h>
using namespace std;

long long MOD = pow(10,9) + 7;

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main(){
    long long N, L;
    cin >> N >> L;

    vector<long long> N_step(N+1);
    N_step.at(0) = 1;
    N_step.at(1) = 1;

    for(int i=2; i<N+1;i++){
        N_step.at(i) = (N_step.at(i-1) * i)%MOD;
    }

     

    /*nCrを作る */
    long long max_r = N/L;
    long long ans = 1;

    if(max_r == 0){
        cout << ans << endl;
        return 0;
    }

    

    for(int r=1; r <= max_r; r++){
        long long n = N - L*r + r;
        long long n_r = n - r;

        ans += ((((N_step.at(n) * modinv(N_step.at(n_r), MOD))) %MOD ) * modinv(N_step.at(r), MOD) ) %MOD;

        ans %= MOD;

    }


    

    cout << ans << endl;

}