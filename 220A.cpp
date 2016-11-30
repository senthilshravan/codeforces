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
    int n;
    cin >> n;
    int arr[n], copy[n];
    rep(i , n){cin >>arr[i];copy[i] = arr[i];}
    sort(copy, copy+n);
    int result =  0;
    rep(i, n){
        if(arr[i] != copy[i])result++;
    }
    if(result <= 2)cout<<"YES";
    else cout<<"NO";


}
