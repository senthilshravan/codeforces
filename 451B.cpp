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
    int st=-1, fn=-1;
    cin >> n;
    int arr[n];
    rep(i, n)cin >> arr[i];
    int flag1, flag2;
    flag1 = 0;
    flag2 = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1] && st== -1){st = i;flag1 = 1;}
        if(arr[n-1-i] < arr[n-2-i] && fn == -1){fn = n-1-i;flag1 = 1;}
        if(st != -1 && fn != -1)break;
    }
    if(flag1 == 1)
        reverse(arr+st, arr+fn+1);
    else st=fn=0;
    int flag = 0;
    for(int i=1;i<n;i++)if(arr[i-1] > arr[i])flag = 1;
    if(flag == 1)cout<<"no";
    else cout<<"yes\n"<<st+1<<" "<<fn+1;
    // cout<<"\n"<<st <<" "<<fn;
}
