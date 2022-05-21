#include <bits/stdc++.h>
using namespace std;

int main(){
    int S,T,X;

    cin >> S >> T >> X;

    set<int> on;

    if(S < T){
        for(int i=S; i<T; i++) on.insert(i);
    }
    else{
        for(int i=S; i<24; i++) on.insert(i);
        for(int i=0; i<T; i++) on.insert(i);
    }

    if(on.count(X)) cout << "Yes"<< endl;
    else cout << "No" << endl;
}