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
    int N;
    cin >> N;
    vll A(N);
    REP(i,N) cin >> A[i];

    int res = 0;

    REP(i,N){
        while(i+1 < N && A[i] == A[i+1]) i++;

        if(i+1 < N && A[i] < A[i+1]){
            while(i+1 <N && A[i] <= A[i+1]) i++;
        }
        else if(i+1 < N && A[i] > A[i+1]){
            while(i+1 < N && A[i] >= A[i+1])i++;
        }

        res++;
    }

    cout << res << endl;
}