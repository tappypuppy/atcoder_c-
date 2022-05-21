#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    int bit_size = S.size() -1;

    long long sum = 0;

    for(int bits = 0; bits < (1 << bit_size); bits++){
        long long a = S.at(0) - '0';

        for(int i=0; i<bit_size; i++){
            if(bits & (1<<i)){
                sum += a;
                a = 0;
            }

            a = a*10 + S.at(i+1) - '0';
        }

        sum += a;
    }

    cout << sum << endl;
}