#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> S(N);
    for(int i=0; i<N;i++)cin >> S.at(i);

    vector<vector<int>> sample(200, vector<int>(200, -1));

    int max = 200;

    for(int i=1; i<max; i++){
        for(int j=1; j<max; j++){
            int menseki = 4*i*j + 3*i + 3*j;
            if(menseki > 1000) continue;
            else{
                sample.at(i).at(j) = menseki;
            }
        }
    }

    int cnt = 0;

    for(int k=0; k<N; k++){
        bool flag = true;

        for(int i=1; i<max; i++){
            for(int j=1; j<max; j++){
                if(sample.at(i).at(j) == -1) continue;
                else if(sample.at(i).at(j) == S.at(k)) flag = false;
            }
        }

        if(flag) cnt++;
    }

    cout << cnt << endl;
}