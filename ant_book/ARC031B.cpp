#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf

int H = 10;
int W = 10;

void dfs(vector<vector<char>> &c, vector<vector<bool>> &f ,int x,int y){
    if( x<0 || y<0 || x >= H || y >= W || c[x][y] == 'x') return;
    if(f[x][y]) return;

    f[x][y] = true;

    dfs(c,f,x+1,y);
    dfs(c,f,x-1,y);
    dfs(c,f,x,y+1);
    dfs(c,f,x,y-1);
}

bool func(vector<vector<bool>> &f, int ma){
    int cnt = 0;
    REP(i,H){
        REP(j,W){
            if(f[i][j]) cnt++;
        }
    }

    if(cnt == ma) return true;
    else return false;
}

int main(){
    vector<vector<char>> A(H,vector<char>(W));

    int ma = 1;

    REP(i,H){
        REP(j,W){
            cin >> A[i][j];
            if(A[i][j] == 'o') ma++;
        }
    }

    REP(i,H){
        REP(j,W){
            vector<vector<bool>> flag(H,vector<bool> (W,false));
            vector<vector<char>> sima = A;
            sima[i][j] = 'o';

            dfs(sima, flag, i,j);
            if(func(flag,ma)){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;


}