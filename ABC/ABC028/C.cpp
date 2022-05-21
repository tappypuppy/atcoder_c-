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
    int A,B,C,D,E;
    cin >> A >> B >> C >> D >> E;

    vi num(5);
    num[0] = A;
    num[1] = B;
    num[2] = C;
    num[3] = D;
    num[4] = E;

    vector<bool> flag(300,false);

    do{
        int sum = 0;
        REP(i,3){
            sum += num[i];
        }

        flag[sum]  = true;
    }while(next_permutation(num.begin(),num.end()));

    int cnt = 0;
    int ans;

    for(int i=299;i>0;i--){
        if(flag[i]) cnt++;
        if(cnt == 3) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

 }