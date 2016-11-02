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
int n, k, d;
ll arr[101][2];
int main(){ios :: sync_with_stdio (false);
    cin >> n >> k >> d;
    rep(i, n+1)arr[i][0] = arr[i][1] = 0;
    arr[0][0] = 1;
    arr[0][1] = 0;
    for(int i=1;i<=n;i++){
        arr[i][0] = arr[i][1] = 0;
        for(int j=1;j<=k;j++){
            if(i-j >= 0){
                if(j>=d){
                    arr[i][1] = (arr[i-j][0]%mod + arr[i][1]%mod + arr[i-j][1]%mod)%mod;
                }
                else{
                    arr[i][0] = (arr[i][0]%mod + arr[i-j][0]%mod)%mod;
                    arr[i][1] = (arr[i][1]%mod + arr[i-j][1]%mod)%mod;
                }
            }
        }
    }
    cout<<arr[n][1];
}
