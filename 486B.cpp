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
    int n, m;
    cin >> n >> m;
    int val;
    if(n == 1 && m == 1){
        cin >> val;
        cout<<"YES\n"<<val;
        // else cout<<"NO";
        // return 0;
    }
    else{
    int arr[n][m], A[n][m], zerocount=0;
    rep(i , n)rep(j, m){cin >> arr[i][j];A[i][j] = 0;if(arr[i][j] == 0)zerocount++;}
    int flag1, flag2, mainflag=1, count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                flag1 = 0;flag2 = 0;
                for(int k=0;k<m;k++){
                    if(arr[i][k] == 1)flag1++;
                }
                for(int k=0;k<n;k++)
                if(arr[k][j] == 1)flag2++;
                // cout<<i<<" "<<j<<" "<<flag1<< " "<<flag2<<"\n";
                if(flag1 == 1 && flag2 == 1)mainflag = 0;
                else if(flag1 != m && flag2 != n && zerocount != 0)mainflag = 0;
                else if(flag1 == m && flag2 == n){A[i][j] = 1;count++;}
            }
        }
        if(mainflag == 0)break;
    }
    if(mainflag == 0)cout<<"NO";
    else {
        if(count == 0 && zerocount != n*m)cout<<"NO";
        else{
        cout<<"YES\n";
        rep(i, n){
            rep(j, m){
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    }
}
}
