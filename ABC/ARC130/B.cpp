#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;

    int C,Q;
    cin >> C >>Q;
    vector<int> t(Q),n(Q), c(Q);
    for(int i=0; i<Q; i++) cin >> t[i] >> n[i] >> c[i];

    set<int> hset, wset;

    vector<long long> v(C+1,0);

    for(int i=Q-1; i>=0; i--){
        if(t[i] == 1){
            if(hset.count(n[i])) continue;
            
            hset.insert(n[i]);
            v[c[i]] += (W - wset.size());
        }
        else{
            if(wset.count(n[i])) continue;

            wset.insert(n[i]);
            v[c[i]] += (H - hset.size());
        }
    }

    for(int i=1; i<C+1; i++) cout << v[i] << ' ';
    cout << endl;


}