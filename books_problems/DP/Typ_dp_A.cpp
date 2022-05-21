#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    for(int i=0; i<N; i++) cin >> p.at(i);

    int max_points = 10010;

    vector<vector<int>> dp(N, vector<int>(max_points,0));

    dp.at(0).at(p.at(0)) = 1;
    dp.at(0).at(0) = 1;

    for(int i=1; i<N; i++){
        for(int j=0; j<max_points; j++){
            if(j - p.at(i) >= 0){
                dp.at(i).at(j)  = max(dp.at(i-1).at(j), dp.at(i-1).at(j-p.at(i))); 
            }
            else{
                dp.at(i).at(j) = dp.at(i-1).at(j);
            }
            
        }
    }

    int cnt = 0;

    for(int i=0; i<max_points; i++){
        if(dp.at(N-1).at(i) == 1) cnt++;
    }

    cout << cnt << endl; 
    


}