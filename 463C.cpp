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
int main(){ios :: sync_with_stdio (false);
    int n,i,j, a, b;
    cin >> n;
    ll arr[n+1][n+1],diagonal1[2*n+1], diagonal2[2*n+1];
    map<pair<int , int> ,int> m1, m2;
    repi(i,1, n+1)repi(j,1, n+1){cin >> arr[i][j];}
    rep(i, 2*n+1)diagonal1[i] = diagonal2[i] = 0;
    repi(i, 1, n+1){
        repi(j, 1, n+1){
            diagonal1[i+j] += arr[i][j];
            diagonal2[i-j+n] += arr[i][j];
        }
    }
    // repi(i, 1, 2*n+1)cout<<diagonal1[i]<<" "<<diagonal2[i]<<"\n";
    ll oddmax = INT_MIN, evenmax = INT_MIN;
    int ex, ey, ox,oy;
    repi(i, 1, n+1){
        repi(j, 1, n+1){
            if((i+j)%2 == 1 && oddmax < diagonal1[i+j] + diagonal2[i-j+n]-arr[i][j]){oddmax = diagonal1[i+j] + diagonal2[i-j+n]-arr[i][j]; ox = i;oy=j;}
            else if((i+j)%2 == 0 && evenmax < diagonal1[i+j] + diagonal2[i-j+n]-arr[i][j]){evenmax = diagonal1[i+j] + diagonal2[i-j+n]-arr[i][j];ex=i;ey=j;}
        }
    }
    cout<<oddmax+evenmax<<"\n"<<ox<<" "<<oy<<" "<<ex<<" "<<ey;


}
