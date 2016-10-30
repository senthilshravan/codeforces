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
    int arr[n];
    rep(i,n)cin >> arr[i];
    int result = arr[0]+1;
    repi(i,1, n){
        if(arr[i] >= arr[i-1])result+= arr[i] - arr[i-1]+1+1;
        else result += arr[i-1] - arr[i]+1+1;
    }
    cout<<result;


}
