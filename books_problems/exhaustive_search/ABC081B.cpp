#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    int cnt = 0;

    bool flag = true;

    while(flag){
        for(int i=0; i<N; i++){
            if(A.at(i) % 2 == 0){
                A.at(i) /= 2;
            }
            else flag = false;
        }

        if(flag) cnt++;

    }

    cout << cnt << endl;
}