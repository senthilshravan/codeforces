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

vector<pair<ll, ll>> v;

int main(){ios :: sync_with_stdio (false);
    int n, len;
    ll result = 0;
    cin >> n;
    len = n;
    ll a, b;
    while(n--){
        cin >> a>>b;
        v.pb(mp(a, b));
    }
    sort(v.begin(), v.end());
    ll i, j;
    i = 0;j =1;
    while(j < len){
        if(v[i].f <= v[j].f && v[i].s >= v[j].s){
            result++;
            j++;
        }
        else{
            i=j;
            j++;
        }
    }
    cout<<result;
}
