#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
// #define mod 1000000007
#define inf 1e8
#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define f first
#define s second
#define mp make_pair
#define rep(i,n) for(ll i=0;i<n;i++)
#define repi(i,s,n) for(ll i=s;i<n;i++)
int main(){ios :: sync_with_stdio (false);
    ll n, k;
    int result = -1;
    cin >> n>> k;
    k--;
    ll minus, jump, current, start, mod;
    if(k % 2 == 0){
        cout<<1;
        return 0;
    }
    else if((k-1)%4 == 0){
        cout<<2;
        return 0;
    }
    else{
        current = 3;
        start = 3;
        jump = 4;
        mod = 8;
        while(1){
            if((k-start)%mod == 0){
                cout<<current;
                return 0;
            }
            else{
                current++;
                start += jump;
                jump *= 2;
                mod *= 2;
            }
        }
    }

}
