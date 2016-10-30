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

ll dp[100001];

int main(){ios :: sync_with_stdio (false);
    int n;
    cin>>n;
    int arr[n];
    map<int, ll> m;
    rep(i, n){cin >> arr[i];m[arr[i]]++;}
    if(n==1){cout<<arr[0];return 0;}
    dp[0] = 0;
    dp[1] = m[1];
    dp[2] = max(m[2]*2+m[0], m[1]);
    repi(i, 3, 100001){
        dp[i] = max(m[i]*i + dp[i-2], dp[i-1]);
    }
    cout<<dp[100000];

}
