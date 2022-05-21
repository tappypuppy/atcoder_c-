#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    long long all_sum = 0;
    for(int i=0; i<N; i++) all_sum += A.at(i);

    vector<long long> B(2*N);
    for(int i=0; i<N; i++){
        B.at(i) = A.at(i);
        B.at(i+N) = A.at(i);
    }

    if(all_sum % 10 != 0){
        cout <<"No" << endl;
        return 0;
    }

    long long samp = all_sum/10;

    int right = 0;
    long long sum = 0;
    bool flag = false;
    
    for(int left = 0; left<2*N; left++){

        while(right < 2*N && sum + B.at(right) <= samp){
            sum += B.at(right);
            right++;
            if(sum == samp) flag = true;
        }

        if(right == left) right++;
        else sum -= B.at(left);
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}