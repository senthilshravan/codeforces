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
    string inp, ans="";
    cin >> inp;
    int i;
    for(i=0;i<inp.length();i++){
        // cout<<ans<<"\n";
        if(i<2)ans+=inp[i];
        else if(ans[ans.length()-1] == inp[i] && ans[ans.length()-2] == inp[i])continue;
        else if(i>2 && ans[ans.length()-1] == inp[i] && ans[ans.length()-2] == ans[ans.length()-3])continue;
        else ans += inp[i];
    }
    cout<<ans;

}
