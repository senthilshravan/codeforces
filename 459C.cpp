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
    int n, k, d;
    cin >> n>>k>>d;
    int temp = 1,j, i=1, flag = 0;
    while(i <=d){
        temp *= k;
        i++;
        if(temp >= n){
            flag = 1;
            break;
        }
    }
    if(flag == 0){cout<<-1;return 0;}
    int ans[n][d];
    rep(i, n)rep(j, d)ans[i][j] = 0;
    for(i=1;i<n;i++){
        for(j=0;j<d;j++)ans[i][j] = ans[i-1][j];
        for(j=d-1;j>=0;j--){
            ans[i][j] = (ans[i][j] + 1)%k;
            if(ans[i][j])break;
        }
    }
    for( i=0;i<d;i++){
        for( j=0;j<n;j++){
            cout<<ans[j][i]+1<<" ";
        }
        cout<<"\n";
    }
}
