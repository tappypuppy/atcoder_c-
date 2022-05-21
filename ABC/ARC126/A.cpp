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
    int T;
    cin >> T;

    vll N2(T),N3(T),N4(T);
    REP(i,T) cin >> N2[i] >> N3[i] >> N4[i];

    REP(i,T){
        ll cnt = 0;
        ll N6 = N3[i]/2;
        
        if(N6 >= N4[i]){
            cnt += N4[i];
            N6 -= N4[i];

            ll N2to4 = N2[i]/2;

            if(N6 < N2to4){
                cnt += N6;
                N2[i] -= N6*2;
                cnt += (ll)(N2[i]/5);
            }
            else{
                cnt += N2to4;
            }
        }
        else{   // N6 < N4[i]
            cnt += N6;
            N4[i] -= N6;

            ll N4to8 = N4[i]/2;

            if(N2[i] < N4to8){
                cnt += N2[i];
            }
            else{

                cnt += N4to8;
                N2[i] -= N4to8;

                if(N4[i]%2 == 1){
                    if(N2[i] >= 3){
                        cnt++;
                        N2[i] -= 3;
                    }
                }

                cnt += N2[i]/5;

                
            }


        }

        cout << cnt << endl;


    }
}