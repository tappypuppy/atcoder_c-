#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    char st = S[0];
    int cnt = 1;

    long long ans = 0;

    for(int i=1; i<N; i++){
        if(st == S[i]){
            cnt++;
        }
        else{
            cnt = 1;  
        }

        st = S[i];
        if(cnt >= 2){
            ans += cnt -1;
        }
    }

    cout << ans << endl;

 
}