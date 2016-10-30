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
    int a, b;
    int i, n, m;
    cin >> n;
    m = n;
    vector<pair<int, int>> v;
    while(m--){
        cin >> a>> b;
        v.pb(mp(a, b));
    }
    sort(v.begin(), v.end());
    // rep(i, n)cout<<v[i].f<<" "<<v[i].s<<" ";
    int first;
    if(n == 1){
        if(v[0].first<=v[0].second)cout<<v[0].first;
        else cout<<v[0].second;
        return 0;
        // cout<<v[0].first <= v[0].second? v[0].first : v[0].second;
    }
    else{
        if(v[1].first >= v[0].first && v[1].second >= v[0].second){
            if(v[1].first <= v[1].second)first = 1;
            else first = 2;
        }
        else if(v[1].first >= v[0].first )first = 1;
        else if(v[1].second >= v[0].second)first = 2;
        i = 2;
        while(i < n){
            if(first == 1){
                if(v[i].first >= v[i-1].first && v[i].second >= v[i-1].first){
                    if(v[i].first <= v[i].second)first = 1;
                    else first = 2;
                }
                else if(v[i].first >= v[i-1].first)first = 1;
                else first =2;
            }
            else{
                if(v[i].first >= v[i-1].second && v[i].second >= v[i-1].second){
                    if(v[i].first <= v[i].second)first = 1;
                    else first = 2;
                }
                else if(v[i].first >= v[i-1].second)first= 1;
                else first= 2;
            }
            i++;
        }
    }
    if(first == 1)cout<<v[n-1].first;
    else cout<<v[n-1].second;
}
