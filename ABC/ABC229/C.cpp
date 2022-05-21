#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,W;
    cin >> N >> W;

    vector<pair<long long, int>> ab(N);
    for(int i=0;i<N;i++) cin >> ab[i].first >> ab[i].second;

    sort(ab.begin(), ab.end());

    reverse(ab.begin(), ab.end());

    long long ans = 0;

    for(int i=0; i<N; i++){
        ans += ab[i].first * min(W, ab[i].second);
        W -= ab[i].second;

        if(W<=0) break;
    }

    cout << ans << endl;




    
    
}