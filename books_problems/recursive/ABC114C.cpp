#include <bits/stdc++.h>
using namespace std;

long long N;

void func(long long cur, int bits, long long &counter){
    //base case
    if(cur >N) return;
    if(bits == 0b111) counter++;

    func(cur*10 + 7 , bits | 0b100, counter);
    func(cur*10 + 5 , bits | 0b010, counter);
    func(cur*10 + 3 , bits | 0b001, counter);

}

int main(){
    cin >> N;

    long long ans = 0;

    func(0,0,ans);
    cout << ans << endl;
}