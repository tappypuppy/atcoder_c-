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
    int N;
    cin >> N;
    map<string,int> cnt;
    REP(i,N){
        string S;
        cin >> S;
        cnt[S] += 1;
    }

    int maxcnt = -1;

    for(pair<string,int> p: cnt){
        int value = p.second;
        maxcnt = max(maxcnt, value);
    }

    for(pair<string,int> p: cnt){
        string key = p.first;
        int value = p.second;

        if(value == maxcnt){
            cout << key << endl;
        }
    }
}