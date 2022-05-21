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

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    reverse(ret.begin(),ret.end());
    return ret;
}

int main(){
    ll N;
    cin >> N;

    ll sum = 0;

    vll yakusu;
    yakusu = divisor(N);

    int Nsize = (int)yakusu.size();

    REP(i,Nsize-1){
        sum += (yakusu[i] - yakusu[i+1])*(N/yakusu[i]);
    }

    sum += N;

    cout << sum << endl;
}