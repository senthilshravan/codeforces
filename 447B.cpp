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
    string inp;
    int arr[27];
    int s;
    cin >> inp;
    cin >> s;
    rep(i, 26)cin >> arr[i];
    ll result = 0;
    rep(i, inp.length())result += (i+1) * arr[int(inp[i] - 'a')];
    // cout<<result<<"\n";
    int max = *max_element(arr, arr+26);
    // cout<<"max is "<<max<<"\n";
    int temp = (inp.length() + s)*(inp.length() + s+1)/2 - (inp.length())*(inp.length()+1)/2;
    result += max * temp;
    cout<<result;

}
