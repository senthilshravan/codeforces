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
int main(){
  int n, m , k;
  cin>> n>> m>>k;
  ll temp, count, result = 0;
  std::vector<ll> v;
  int i, j;
  rep(i, m+1){
      cin >> temp;
      v.pb(temp);
  }
  rep(i, m){
      temp = v[i] ^ v[m];
      j = n,count = 0;
      while(j--){
          if(temp & 1)
            count++;
        temp = temp>>1;
      }
      if(count <= k)
        result++;
  }
  cout<<result;

}
