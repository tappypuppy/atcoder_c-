#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
 
    vector<string> si(N);
 
    for(int i=0; i<N; i++){
        string tmp = S;
        tmp.erase(i,1);
        si[i] = tmp;
 
    }
 
    sort(si.begin(), si.end());
 
    vector<long long> cnt(N, 0);
 
    string st;
 
    st = si[0];
 
    int res = 0;
 
    cnt[res] += 1;

    long long ans = 0;
 
    for(int i=1; i<N; i++){
        if(st == si[i]){
            cnt[res] += 1;

            if(cnt[res] > 1) ans += cnt[res] -1;
        }
        else{
            // ans += (cnt[res] * (cnt[res]- 1)) / 2;
            res++;
            cnt[res] += 1;
            st = si[i];
        }
    }
 
    
 
    cout << ans << endl;
 
}