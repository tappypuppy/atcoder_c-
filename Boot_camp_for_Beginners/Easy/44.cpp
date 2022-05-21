#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    if(N==1){
        cout << 0 << endl;
        return 0;
    }

    int odd0_cnt = 0;
    int odd1_cnt = 0;

    //odd:0 even;1
    REP(i,N){
        if(i%2 == 1){
            (S[i] == '1') ? odd0_cnt++ : odd1_cnt++; 
        }
        if(i%2 == 0){
            (S[i] == '0') ? odd0_cnt++ : odd1_cnt++;
        } 
    }

    cout << min(odd0_cnt, odd1_cnt) << endl;

}