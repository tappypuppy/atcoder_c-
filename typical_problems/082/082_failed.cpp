#include <bits/stdc++.h>
using namespace std;

int main(){
    long long MOD = pow(10,9) + 7;

    long long L,R;
    cin >> L >> R;

    int L_keta, R_keta;
    L_keta = log10(L)+1;
    R_keta = log10(R)+1;

    if(L_keta == 19){
        cout << L % MOD << endl;
        return 0;
    } 

    long long cnt = 0;

    for(int i=L_keta; i<= R_keta; i++){
        if(L_keta == R_keta){
            cnt = cnt + ((R - L)%MOD) * i %MOD; 
            break;
        }
        if(i == R_keta){
            long long min_R = pow(10, i);
            cnt = cnt + ((R- min_R) %MOD) * i %MOD;
            break;
        }
        if(i == L_keta){
            long long max_L = pow(10, i+1) - 1;
            cnt = cnt + ((max_L - L)%MOD) * i % MOD;
            continue;
        }

        long long kosu =  (long long)((pow(10,i+1) - pow(10,i))/2) % MOD;

        long long sum_i =((long long)pow(10,i) % MOD) + ((long long)(pow(10,i+1) -1) %MOD);

        cnt = cnt + (sum_i%MOD) * (kosu % MOD) * i;

        cnt %= MOD;


    }

    cout << cnt << endl;
    
}