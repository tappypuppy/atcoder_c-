#include <bits/stdc++.h>
using namespace std;

int main(){
    int K,S;
    cin >> K >> S;

    int cnt= 0;

    for(int i=0;i<=K; i++){
        for(int j=i; j<=K; j++){
            for(int l=j; l<=K; l++){
                
                if(i+j+l == S && i == j && j == l) cnt++;
                else if(i+j+l == S && (i == j || j == l || l == i)) cnt += 3;
                else if(i+j+l == S)cnt += 6;
            }
        }
    } 

    cout << cnt << endl;
}