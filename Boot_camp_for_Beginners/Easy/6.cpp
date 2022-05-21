#include <bits/stdc++.h>
using namespace std;

int main(){
    long long H,W;
    cin >> H >> W;
    
    if(H == 1 || W == 1){
        cout << 1 << endl;
        return 0;
    }

    cout << (long long)(H*W+1)/2 << endl;


}