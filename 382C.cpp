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
    int n;
    cin >> n;
    pair<int, int> d1, d2, temp;
    int arr[n],d, pos1, pos2, repeatition = 0;
    rep(i, n)cin >> arr[i];
    sort(arr, arr+n);
    map<int, int> m, repeat;
    repeat[arr[0]]  =1;
    int flag = 0;
    repi(i, 1, n){m[arr[i] - arr[i-1]]++; if(repeat[arr[i]] == 1){repeatition = 1;}repeat[arr[i]]=1;}
    if(n == 1)cout<<-1;
    else if(n == 2 && repeatition == 0){
        d = arr[1] - arr[0];
        if((arr[1] - arr[0])%2 == 0)cout<<3<<"\n"<<arr[0] - d<<" "<<arr[0] + d/2<<" "<<arr[1]+d;
        else cout<<2<<"\n"<<arr[0] - d<<" "<<arr[1] + d;
    }
    else{
        if(m.size() == 1){
            d = m.begin()->first;
            if(repeatition == 0)
                cout<<2<<"\n"<<arr[0] - d<<" "<<arr[n-1] + d;
            else
                cout<<1<<"\n"<<arr[0] - d;
        }
        else if(m.size() > 2){cout<<0;return 0;}
        else if((((m.begin())->second >=1 && (++m.begin())->second == 1)|| (((m.begin())->second == 1)&& (++m.begin())->second >= 1)) && repeatition == 0){
            d1 = *(m.begin());
            d2 = *(++m.begin());
            if(d1.first > d2.first){temp = d1;d1 = d2; d2 = temp;}
            if(d2.first/2 != d1.first){cout<<0;return 0;}
            if(d2.second == 1)
            repi(i,1, n){
                if(arr[i] - arr[i-1] == d2.first){cout<<1<<"\n"<<arr[i-1] + d1.first;break;}
            }
            else cout<<0;
        }
        else cout<<0;
    }
}
