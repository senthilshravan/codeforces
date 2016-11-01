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
    int n , m;
    cin >> n >> m;
    int result = min(n, m)+1;
    cout<<result<<"\n";
    rep(i, min(n, m)+1){
        cout<<i<<" "<<min(n, m)-i<<"\n";
    }
}
