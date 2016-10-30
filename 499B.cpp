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
    int m, n;
    string temp1, temp2;
    cin >> n >> m;
    map<string, string> ma;
    rep(i, m){
        cin >>temp1>> temp2;
        ma[temp1] = (temp1.length() <= temp2.length()? temp1:temp2);
    }
    string output = "";
    rep(i, n){
        cin >> temp1;
        output += ma[temp1]+" ";
    }
    cout<<output;

}
