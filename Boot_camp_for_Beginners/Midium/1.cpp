#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> a(N);
    for(int i=0; i<N;i++) cin >> a[i];
    vector<bool> loop(N, false);

    // first 
    int on = 0;
    int cnt = 1;
    loop[0] = true;

    while(!loop[a[on] -1]){
        on = a[on] - 1;
        loop[on] = true;
        cnt++;
        if(on == 1) break;
    }

    if(loop[1]){
        cout << cnt - 1<< endl;
    }
    else cout << -1 << endl;
}
