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
int main(){
    ios :: sync_with_stdio (false);
    ll n, m, result = 0, temp, i;
    std::vector<ll> v;
    cin >> n >> m;
    rep(i,m){
        cin>> temp;
        v.pb(temp);
    }
    ll curr = 1;
    for(i=0;i<m;i++){
        if(v[i] < curr){
            result += n - curr + 1;
            curr = 1;
        }
        result += v[i] - curr;
        curr = v[i];
    }
    cout<<result;
}
