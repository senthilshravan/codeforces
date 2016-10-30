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
bool arr[1000001];
int main(){ios :: sync_with_stdio (false);
    arr[0] = 1;
    arr[1] = 1;
    ll temp,m, n;
    rep(i, 1000001){
        if(arr[i] == 0){
            m = i+i;
            while(m < 1000001){
                arr[m] = 1;
                m += i;
            }
        }
    }
    cin >> n;
    double val;
    while(n--){
        cin >> temp;
        val = (int)sqrt(temp);
        // cout<<val<<"\n";
        if(val*val == temp && arr[(int)val] == 0)cout<<"YES\n";
        else cout<<"NO\n";
    }



}
