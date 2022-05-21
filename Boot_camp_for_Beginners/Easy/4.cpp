#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    bool flag = false;

    int ans;

    for(int i=1;i<=N;i++){
        double X;
        X = i * 1.08;
        if((int)X == N) {
            flag = true;
            ans = i;
            break;
        }
    }

    if(flag){
        cout << ans << endl;
    }
    else{
        cout << ":(" << endl;
    }
}