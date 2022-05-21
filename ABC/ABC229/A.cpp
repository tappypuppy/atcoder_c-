#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1,S2;
    cin >> S1 >> S2;

    int cnt = 0;

    if(S1[0] == '#') cnt++;
    if(S2[0] == '#') cnt++;
    if(S1[1] == '#') cnt++;
    if(S2[1] == '#') cnt++;

    bool flag = true;

    if(cnt == 2){
        if(S1[0] == '#' && S2[1] == '#') flag = false;
        if(S1[1] == '#' && S2[0] == '#') flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}