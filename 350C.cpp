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
    int n,i, j, k, diff, current;
    string result= "";
    int step = 0;
    cin >>n;
    int x[n], y[n];
    vector<pair<int , int>> v;
    rep(i, n)cin >> x[i]>> y[i];
    rep(i, n){
        v.pb(mp(abs(x[i]) + abs(y[i]), i));
    }
    sort(v.begin(), v.end());
    rep(i, n){
        current =   v[i].second;
        diff = x[current];
        if(diff > 0){result += "1 "+ to_string(diff)+" R\n";step++;}
        else if(diff < 0){result += "1 "+to_string(-1*diff) + " L\n";step++;}
        diff = y[current];
        if(diff > 0){result += "1 "+to_string(diff)+" U\n";step++;}
        else if(diff < 0){result += "1 "+to_string(-1 * diff)+" D\n";step++;}
        result += "2\n";
        step++;
        diff = x[current];
        if(diff > 0){result += "1 "+ to_string(diff)+" L\n";step++;}
        else if(diff < 0){result += "1 "+to_string(-1*diff) + " R\n";step++;}
        diff = y[current];
        if(diff > 0){result += "1 "+to_string(diff)+" D\n";step++;}
        else if(diff < 0){result += "1 "+to_string(-1 * diff)+" U\n";step++;}
        result += "3\n";
        step++;
    }
    cout<<step<<"\n"<<result;

}
