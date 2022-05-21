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

///12345
// 1423
// 4231
// 1324
// 4132
// 2314
// 1432

//1. 12345 not reverse and shift
//2. 51234 not reverse shift only
//3. 54321 not shift reverse only
//4. 32154 reverse and shift
// 45123

int main(){
    int n;
    cin >> n;
    vi p(n);
    REP(i,n) cin >> p[i];

    vi samp(n);
    samp = p;
    sort(samp.begin(), samp.end());

    //1
    bool f = true;
    REP(i,n){
        if(samp[i] != p[i]) f = false;
    }

    if(f){
        cout << 0 << endl;
        return 0;
    }

    //3
    reverse(samp.begin(),samp.end());
    bool f1 = true;
    REP(i,n){
        if(samp[i] != p[i]) f1 = false;
    }

    if(f1){
        cout << 1 << endl;
        return 0;
    }

    //4
    //find n index
    int n_index, one_index;
    REP(i,n){
        if(p[i] == n) n_index = i;
        if(p[i] == 1) one_index = i;
    }

    if( (n%2 == 0 && 2*n_index > n) || (n%2 == 1 && 2*n_index - 1 > n)){
        int cnt = 0;
        //reverse
        cnt++;

        //shift
        cnt += n+1 - n_index;

        bool nonrev = true;

        if(one_index != n-1 && p[one_index+1] == 2){
            nonrev = false;
        }
        else if(one_index == n-1 && p[0] == 2){
            nonrev = false;
        }

        if(nonrev){
            cout << cnt << endl;
        }
        else{
            cout << cnt-1 <<   endl;
        }
    }
    else{
        int cnt = 0;
        //shift
        cnt += n_index;

        bool nonrev = false;

        if(one_index != n-1 && p[one_index+1] == 2){
            nonrev = true;
        }
        else if(one_index == n-1 && p[0] == 2){
            nonrev = true;
        }

        if(nonrev){
            cout << cnt << endl;
        }
        else{
            cout << cnt+1 << endl;
        }
    }
    




}