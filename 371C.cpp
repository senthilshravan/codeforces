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
    string inp;
    int nb, ns, nc, ps, pb, pc;
    int bb=0, bs=0, bc=0;
    ll money, l, r, prev = -1,mid,price, result=-1, tempb, temps, tempc;
    cin >> inp;
    rep(i, inp.length()){
        if(inp[i] == 'B')bb++;
        else if(inp[i] == 'S')bs++;
        else if(inp[i] == 'C')bc++;
    }
    cin >>nb>>ns>>nc;
    cin >> pb>> ps>> pc;
    cin >> money;
    l = 0; r = pow(10, 13);
    while(l<=r){
        mid = (l+r)/2;
        // if(mid == prev)break;
        prev = mid;
        price = 0;
        tempb = mid*bb;
        temps = mid*bs;
        tempc = mid*bc;
        if(bb > 0){
            if(tempb < nb)price = 0;
            else price += (tempb - nb)*pb;
        }
        if(bs > 0){
            if(temps > ns)price += (temps- ns)*ps;
        }
        if(bc>0)if(tempc>nc)price += (tempc-nc)*pc;
        if(money < price)r = mid-1;
        else{
            l = mid+1;
            if(result < mid){
                result = mid;
            }
        }
    }
    cout<<result;

}
