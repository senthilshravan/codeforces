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
    ll r, g, b,flag, result = 0;
    ll arr[3];
    cin >> arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    if((arr[0] + arr[1])*2 <= arr[2])cout<<arr[0] + arr[1];
    else cout<<(arr[0] + arr[1] + arr[2])/3;
}
