#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    //WWWBBB

    int loc = 0;
    long long cnt = 0;
    for(int i=0;i<(int)S.size(); i++){
        if(S[i] == 'W'){
            cnt += i - loc;
            loc++;
        }
    }

    cout << cnt << endl;
}