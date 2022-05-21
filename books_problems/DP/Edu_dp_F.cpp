#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    int s_size = s.size();
    int t_size = t.size();

    vector<vector<string>> dp(s_size+1, vector<string>(t_size+1, ""));

    for(int i=0; i<s_size+1; i++){
        for(int j=0; j<t_size+1; j++){
            if(s.at(i) == t.at(j)){
                dp.at(i+1)
            }
        }
    }
}