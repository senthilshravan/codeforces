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
    int n=3;
    int arr[n][n];
    rep(i, n)rep(j, n)cin >> arr[i][j];
    int xminy = arr[0][1] + arr[2][1] - (arr[1][0] + arr[2][0]);
    int yminz = arr[0][2] + arr[1][2] - (arr[0][1] + arr[2][1]);
    int yplusz = arr[1][0] + arr[2][0];
    arr[1][1] = (yplusz + yminz )/2;
    arr[0][0] = xminy + arr[1][1];
    // cout<<arr[1][1] << " "<<arr[0][0]<<"  "<<xminy<<"\n";
    arr[2][2] = yplusz - arr[1][1];
    rep(i, n){
        rep(j, n){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
