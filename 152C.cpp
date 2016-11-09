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
    int n, m;
    cin >> n >> m;
    string arr[n];
    map<char , int > ma;
    ll result = 1, count;
    rep(i, n)cin>>arr[i];
    rep(i, m){
        ma.clear();
        count = 0;
        rep(j, n){
            if(ma[arr[j][i]] == 0){
                count++;
                ma[arr[j][i]] = 1;
            }
        }
        result = (result %mod * count%mod)%mod;
    }
    cout<<result;

}
