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

int H,W;


void dfs(vector<vector<char>> &v, vector<vector<bool>> &f, int x,int y) {
    if( x<0 || y<0 || x >= H || y >= W || v[x][y] == '#') return;
    if(f[x][y]) return;

    f[x][y] = true;

    dfs(v,f,x+1,y);
    dfs(v,f,x-1,y);
    dfs(v,f,x,y+1);
    dfs(v,f,x,y-1);
}

int main(){
    cin >> H >> W;
    vector<vector<char>> c(H,vector<char> (W));

    int sx,sy,gx,gy;

    REP(i,H){
        REP(j,W){ 
            cin >> c[i][j];
            if(c[i][j] == 's'){
                sx = i;
                sy = j;
            }
            if(c[i][j] == 'g'){
                gx = i;
                gy = j;
            }
        }
    }

    vector<vector<bool>> flag(H,vector<bool> (W,false));
    dfs(c,flag,sx,sy);

    flag[gx][gy] ? cout << "Yes" << endl : cout << "No" << endl;


}