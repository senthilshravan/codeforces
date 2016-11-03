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
int n, m, k;
vector<vector<pair<int, int>>> v;
int main(){ios :: sync_with_stdio (false);
    cin >>n>>m>>k;
    int no = (n*m)/k;
    int i, direct, j, currx, curry;
    i=1;
    direct = 1;
    currx = curry = 1;
    while(i<=k){
        if(i == k)no = (n*m)/k +(n*m)%k;
        cout<<no;
        j=1;
        while(j<=no){
            if(direct == 1)cout<<" "<<currx<<" "<<curry++;
            else cout<<" "<<currx<<" "<<curry--;
            if(curry ==m+1){curry = m;currx++;direct = 0;}
            else if(curry == 0){currx++;curry=1;direct = 1;}
            j++;
        }
        i++;
        cout<<"\n";
    }

}
