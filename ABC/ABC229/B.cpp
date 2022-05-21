#include <bits/stdc++.h>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;

    int size = min(A.size(), B.size());

    int diff = abs((int)A.size() - (int)B.size());

    bool flag = true;
    
    if(A.size() >= B.size()){
        for(int i=0; i<size; i++){
        int check;
        check = (A[i + diff] - '0') + (B[i] - '0');

        if(check >= 10) flag = false;
        }
    }
    else{
        for(int i=0; i<size; i++){
        int check;
        check = (A[i] - '0') + (B[i+diff] - '0');

        if(check >= 10) flag = false;
        }
    }
    

    if(flag) cout << "Easy" << endl;
    else cout << "Hard" << endl;
}