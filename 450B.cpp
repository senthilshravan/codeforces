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
int main(){ios :: sync_with_stdio (false);
    ll f1, f2, n,pos;
    ll arr[7];
    cin >> f1 >> f2>>n;
    arr[1] = f1;
    arr[2] = f2;
    arr[3] = f2-f1;
    arr[4] = -f1;
    arr[5] = -f2;
    arr[0] = -f2 + f1;
    pos = n%6;
    // cout<<mod + arr[pos]+mod<<"\n";
    if(arr[pos] >= 0)cout<<(arr[pos])%mod;
    else cout<<((arr[pos])%mod + mod)%mod;
}
