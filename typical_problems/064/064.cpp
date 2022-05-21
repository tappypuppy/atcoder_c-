#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A.at(i);

    vector<long long> L(Q), R(Q), V(Q);
    for(int i=0; i<Q; i++){
        int tmp_L,tmp_R;
        cin >> tmp_L >> tmp_R >> V.at(i);
        L.at(i) = tmp_L -1;
        R.at(i) = tmp_R -1;
    }

    long long ans = 0;
    vector<long long> B(N-1);

    for(int i=0; i<N-1; i++){
        B.at(i)= A.at(i+1) - A.at(i);
        ans += abs(B.at(i));
    }

    for(int i=0; i<Q; i++){
        long long mae, ato;
        if(L.at(i) == 0 && R.at(i) == N-1){
            cout << ans << endl;
        }
        else if(L.at(i) > 0 && R.at(i) == N-1){
            mae = B.at(L.at(i)-1);
            ato = B.at(L.at(i)-1) + V.at(i);

            ans += abs(ato) - abs(mae);

            cout << ans << endl;
            
            B.at(L.at(i) -1) += V.at(i);

        }

        else if(L.at(i) == 0 && R.at(i) < N-1){
            mae = B.at(R.at(i));
            ato = B.at(R.at(i)) - V.at(i);

            ans += abs(ato) - abs(mae);

            cout << ans << endl;
            
            B.at(R.at(i)) -= V.at(i);
        }
        else{
            long long mae1, mae2, ato1, ato2;
            mae1 = B.at(L.at(i)-1);
            ato1 = B.at(L.at(i)-1) + V.at(i);

            ans += abs(ato1) - abs(mae1);

            mae2 = B.at(R.at(i));
            ato2 = B.at(R.at(i)) - V.at(i);

            ans += abs(ato2) - abs(mae2);

            cout << ans << endl;
            
            B.at(R.at(i)) -= V.at(i);
            
            B.at(L.at(i) -1) += V.at(i);
        }
    }
}