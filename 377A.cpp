#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
#define inf 1e8
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define f first
#define s second
#define mp make_pair
#define rep(i,n) for(ll i=0;i<n;i++)
#define repi(i,s,n) for(ll i=s;i<n;i++)

string maze[501];
int  c[501][501], n, m ,k;
//
// int compute(int x, int y){
//     if(k > 0){
//         if(x>=m || y>=n || x<0 || y<0){return 1;}
//         if(c[x][y] != -1)return c[x][y];
//         else if(maze[x][y]=='#'){
//             int result = 0;
//             c[x][y] = 1;
//             result += compute(x, y+1);
//             result += compute(x+1, y);
//             result += compute(x, y-1);
//             result += compute(x-1, y);
//             return 1;
//         }
//         else{
//             int result = 0;
//             c[x][y] = 1;
//             result += compute(x, y+1);
//             result += compute(x+1, y);
//             result += compute(x, y-1);
//             result += compute(x-1, y);
//             if(result > 2){
//                 maze[x][y] = 'X';
//                 cout<<"changing for "<<x<<" "<<y<<"\n";
//                 k--;
//             }
//             else
//                 c[x][y] = 0;
//             cout<<"returning " << c[x][y]<<" for "<<x<<"  "<<y<<"\n";
//             return c[x][y];
//         }
//     }
// }
vector< pair<int, int> > vec;

int compute(int x, int y){
    if(k > 0){
        if(c[x][y] != -1)return 1;
        else if(x>=n || y>=m ||x<0 || y<0 || maze[x][y]=='#')return 1;
        else if (maze[x][y]=='.'){
            int result = 0;
            c[x][y] = 1;
            rep(i, vec.size()){
                result +=  compute(x+vec[i].f, y+vec[i].s);
            }
            if(maze[x][y] == '.' && k>0){
                maze[x][y] = 'X';
                k--;
            }
        }
    }
}


int main(){ios :: sync_with_stdio (false);
    cin >> n >> m >> k;
    int posx=-1, posy=-1;
    vec.pb(mp(1, 0));
    vec.pb(mp(0, 1));
    vec.pb(mp(-1, 0));
    vec.pb(mp(0,-1));
    rep(i, n){
        cin>>maze[i];
        rep(j, m){
            if(posx == -1 && posy == -1 && maze[i][j] == '.'){posx = i;posy = j;}
            c[i][j]=-1;
        }
    }
    compute(posx, posy);
    rep(i, n){
        rep(j,m){
            cout<<maze[i][j];
        }
        cout<<"\n";
    }
}
