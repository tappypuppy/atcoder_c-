#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    vector<vector<int>> A(3, vector<int>(3));

    REP(i,3){
        REP(j,3) cin >> A[i][j];
    }

    int N;
    cin >> N;
    vector<int> B(N);
    REP(i,N) cin >> B[i];

    vector<vector<bool>> bingo(3, vector<bool>(3,false));

    REP(i,N){
        REP(j,3){
            REP(k,3){
                if(B[i] == A[j][k]) bingo[j][k] = true;
            }
        }
    }

    bool flag = false;

    // yoko
    REP(i,3){
        int cnt = 0;
        REP(j,3) if(bingo[i][j]) cnt++;
        if(cnt ==3) flag = true;
        //if(bingo[i][0] && bingo[i][1] && bingo[i][2]) flag = true;
    }

    // tate
    REP(i,3){
        int cnt = 0;
        REP(j,3) if(bingo[j][i]) cnt++;
        if(cnt == 3) flag = true;
        //if(bingo[0][i] && bingo[1][i] && bingo[0][i]) flag = true;
    }

    // naname
    if(bingo[0][0] && bingo[1][1] && bingo[2][2] ) flag = true;
    if(bingo[0][2] && bingo[1][1] && bingo[2][0] ) flag = true;


    (flag) ? cout << "Yes" << endl : cout << "No" << endl;
}