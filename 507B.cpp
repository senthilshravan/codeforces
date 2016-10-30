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
    float x1, y1, x2, y2, r;
    cin >> r>> x1>>y1>>x2>>y2;
    double dist = sqrt((x2-x1)*(x2 - x1) + (y2 - y1)*(y2-y1));
    cout<<ceil(dist/(r+r));

}
