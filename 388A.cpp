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
    int n, tot=0, piles =0, current;
    cin >> n;
    int arr[n];
    rep(i,n)cin >>arr[i];
    // map<int , int> m;
    // vector<pair<int, int>> v;
    // rep(i, n)m[arr[i]]++;
    // for(auto i = m.begin();i != m.end();i++){
        // v.pb(mp(i->first, i->second));
    // }
    int i;
    sort(arr , arr+n);
    while(tot < n ){
        piles++;
        current = 0;
        for(i=0;i< n;i++){
            if(arr[i] >= current && arr[i] != -1){
                current = current+1;
                arr[i] = -1;
                tot++;
            }
        }
    }
    cout<<piles;
}
