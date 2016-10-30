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
    ll n, m, result, temp;
    result = 0;
    cin >> n >> m;
    if(n<m){cout<<"0 0";return 0;}
    ll first, second;
    second = (n - m + 1)*(n-m)/2;
    first = (n/m)*(n/m-1)/2 * (m);
    temp =  n%m;
    first += n/m * temp;
    cout<<first<<" "<<second;

}
