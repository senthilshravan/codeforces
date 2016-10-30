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
    int n;
    ll len, val;
    cin >> n >> len;
    ll arr[n];
    rep(i, n)cin >> arr[i];
    sort(arr, arr+n);
    float maxvalue = INT_MIN;
    if(arr[0] != 0){
        maxvalue = 2* arr[0];
    }
    if(arr[n-1] != len){
        if(2*(len - arr[n-1]) > maxvalue)maxvalue = 2*(len - arr[n-1]);
    }
    for(int i=1;i<n;i++){
        val = arr[i] - arr[i-1];
        if(val > maxvalue)maxvalue = val;
    }
    cout<<fixed<<maxvalue/2;

}
