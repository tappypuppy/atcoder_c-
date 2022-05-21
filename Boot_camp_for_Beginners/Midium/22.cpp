#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf

int main(){
    int N,K;
    cin >> N >> K;

    // calc (1/2)^x (x = 1,2,...,19)
    vector<double> v(20);
    v[0] = 1;
    FOR(i,1,19){
        v[i] = v[i-1]/2;
    }

    // dice number i 

    //  i >= K 
    double p = 0.0;

    if(N>= K){
        p += (double)(N-K+1)/N;
        // 1/N * (1/2)
        double tmp_p = 0.0;

        FOR(i,1,K-1){
            double x = (double)K/i;
            double tmp_dig = log2(x);
            int dig;
            if(tmp_dig > (int)log2(x)) dig = (int)tmp_dig + 1;
            else dig = (int)tmp_dig;
            tmp_p += v[dig];
        }

        p += (double)tmp_p/N;
    }
    else{
        double tmp_p = 0.0;

        FOR(i,1,N){
            double x = (double)K/i;
            double tmp_dig = log2(x);
            int dig;
            if(tmp_dig > (int)log2(x)) dig = (int)tmp_dig + 1;
            else dig = (int)tmp_dig;
            tmp_p += v[dig];
        }

        p += tmp_p/N;
    }

    cout << setprecision(15) << p << endl;


}