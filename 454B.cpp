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
    int n;
    cin >> n;
    int arr[n];
    rep(i, n)cin >> arr[i];
    int flag1 = 0, flag2 = 0, pos=-1;
    for(int i=1;i<n;i++){
        if(flag1 == 0){
            if(arr[i] < arr[i-1]){pos = i; flag1 = 1;}
        }
        else {
            if(arr[i] < arr[i-1]){flag2 = 1; break;}
        }
    }
    // cout<<pos<<"\n";
    if(pos == -1)cout<<0;
    else if(flag2 == 1)cout<<-1;
    else if(arr[n-1] <= arr[0])cout<<n - pos;
    else cout<<-1;
}
