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
    int n,s , f;
    cin>>n>>s>>f;
    int pos[n+1];
    repi(i, 1, n+1)cin >> pos[i];
    map<int, int> m;
    int current = s, times=0, flag = 1;
    while(current != f){
        if(m[current] == 1){flag = 0; break;}
        m[current] = 1;
        current = pos[current];
        times++;
    }
    if(flag == 0)cout<<-1<<"\n";
    else cout<<times<<"\n";

}
