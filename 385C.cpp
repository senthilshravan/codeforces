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
const int cons=10000001;
vector<bool> pcheck(cons, true);
int m[cons];
// unordered_map<int, int> m;
ll maxi, arr[cons], n;
vector<ll> result(cons, 0);
ll r;
void computePrime(){
    ll i, j, k, q, a, b;
    ll temp = 0,r1;
    cin >> n;
    rep(i, n){cin >> arr[i];m[arr[i]]++;}
    pcheck[0] = 0;
    pcheck[1] = 0;
    result[0] = result[1] = 0;
    for(int i=2;i<cons;i++){
        if(pcheck[i]){
            temp = m[i];
            for(k= i+i;k<cons;k+=i){
                pcheck[k] = false;
                temp += m[k];
            }
        }
        result[i] = result[i-1] + temp;
        temp = 0;
    }
    cin >> q;
    int flag = 0;
    while(q--){
        cin >> a>>b;
        flag = 0;
        if(a > cons)a = cons;
        if(b > cons)b = cons-1;
        // if(b>maxi && a < maxi)b = maxi;
        // else if(b> maxi && a >maxi){flag = 1;}
        // if(flag == 0)
            cout<<result[b] - result[a-1]<<"\n";
        // else
            // cout<<0<<"3\n";
    }
}


int main(){ios :: sync_with_stdio (false);

    computePrime();

}
