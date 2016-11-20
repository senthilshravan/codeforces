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

map<int, int> ma;
int m;

bool compute(int diff, int prev, int n, vector<int> v){
    if(n == m){
        cout<<"YES\n";
        rep(i, v.size())cout<<v[i]<<" ";
        return true;
    }
    else{
        for(int i=diff+1; i<=10;i++){
            if(i != prev && ma[i] == 1){
                v.pb(i);
                if(compute(i-diff, i, n+1, v))return true;
                v.pop_back();
            }
        }
        return false;
    }
}

int main(){ios :: sync_with_stdio (false);
    string inp;
    vector<int> v;
    cin >> inp >> m;
    rep(i, inp.length())if(inp[i] == '1')ma[i+1]=1;
    if(!compute(0, 0, 0, v)){
        cout<<"NO";
    }
}
