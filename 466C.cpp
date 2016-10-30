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
int n;
ll total;

int main(){ios :: sync_with_stdio (false);
    cin >> n;
    int arr[n+1];
    ll prefix[n+1], suffix[n+1], count[n+1];
    repi(i, 1,n+1)cin >> arr[i];
    ll result = 0, total=0 ,divi;
    repi(i, 1, n+1){prefix[i] = suffix[i]= count[i]=0;total+=arr[i];}
    divi = total/3;
    if(total % 3 != 0){cout<<0;return 0;}
    prefix[1] = arr[1];
    suffix[n] = arr[n];
    if(suffix[n] == divi)count[n] = 1;
    for(int i=2;i<=n;i++){
        prefix[i] = arr[i] + prefix[i-1];
        suffix[n-i+1] = arr[n-i+1] + suffix[n-i+2];
        if(suffix[n-i+1] == divi)count[n-i+1] =  1 + count[n-i+2];
        else count[n-i+1] = count[n-i+2];
    }
    // cout<<divi<<"\n";
    // repi(i, 1,n+1)cout<<prefix[i]<<" ";
    // cout<<"\n";
    // repi(i, 1,n+1)cout<<suffix[i]<<" ";
    // cout<<"\n";
    // repi(i, 1, n+1)cout<<count[i]<<" ";
    result=  0;
    for(int i=1;i<=n-2;i++){
        if(prefix[i] == divi){
            result += count[i+2];
            // cout<<count[i+2]<<"  "<<result<<"\n";
        }
    }
    cout<<result;
}
