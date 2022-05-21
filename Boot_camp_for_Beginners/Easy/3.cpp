#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B;
    cin >> N >> A >>B;
    string S;
    cin >> S;

    int acnt,bcnt;
    acnt = 0;
    bcnt = 0;

    for(int i=0; i<N; i++){
        if(S[i] == 'a' && acnt + bcnt + 1 <= A + B){
            cout << "Yes" << endl;
            acnt++;
            continue;
        }
        if(S[i] == 'b' && acnt + bcnt  + 1<= A + B && bcnt + 1 <= B){
            cout << "Yes" << endl;
            bcnt++;
            continue;
        }

        cout << "No" << endl;
    }
}