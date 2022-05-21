#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++) cin >> A.at(i).at(j);
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++) cin >> B.at(i).at(j);
    }


    long long cnt = 0;
    for(int i=0; i<H-1; i++){
        for(int j=0; j<W-1; j++){
            int diff = B.at(i).at(j) - A.at(i).at(j);
            cnt += abs(diff);

            A.at(i).at(j) += diff;
            A.at(i+1).at(j+1) += diff;
            A.at(i+1).at(j) += diff;
            A.at(i).at(j+1) += diff;
        }
    }

    bool flag = true;

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(A.at(i).at(j) != B.at(i).at(j)) flag = false;
        }
    }

    if(flag) cout << "Yes" << endl << cnt << endl;
    else cout << "No" << endl;
}