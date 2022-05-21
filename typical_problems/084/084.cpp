#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<char> S(N);
    for(int i=0; i<N; i++) cin >> S.at(i);

    int right = 0;
    long long cnt = 0;

    for(int left = 0; left < N; left++){
        char lc  = S.at(left);

        if(lc != S.at(right)){
            cnt += N - right;
            continue;
        }

        while(lc == S.at(right) && right < N-1){
            right++;
        }

        if(lc != S.at(right)){
            cnt += N - right;
        }

        if(right == left) right++;
    }

    cout << cnt << endl;


}