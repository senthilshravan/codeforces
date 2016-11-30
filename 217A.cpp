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
map<pair<int, int> , int> m;
vector<pair<int , int>> vec(100);
int n;

void search(int i){
    if(m[vec[i]] == 1)return;
    m[vec[i]] = 1;
    for(int j = 0;j<n;j++){
        if(vec[j].f == vec[i].f || vec[j].s == vec[i].s)search(j);
    }
}


int main(){ios :: sync_with_stdio (false);
    int a, b;
    cin >> n;
    rep(i, n){
        cin >> a>>b;
        vec[i].f = a;
        vec[i].s = b;
        m[mp(a, b)] = -1;
    }
    int nofcomponents = 0;
    rep(i, n){
        if(m[vec[i]] == 1)continue;
        nofcomponents++;
        search(i);
    }
    cout<<nofcomponents-1;

}
