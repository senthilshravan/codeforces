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
    string inp;
    cin >> inp;
    string temp;
    int arr[inp.length()], len = inp.length();
    rep(i, len)arr[i] = 0;
    int big = 0, small = 0, flag = 0;
    char a;
    rep(i, len-1){
        if((inp[i] - '0')%2 == 0){
            // cout<<"even\n";
            if(inp[i] < inp[len-1] && big == 0){
                temp = inp;
                a = temp[len-1];
                temp[len-1] = temp[i];
                temp[i]= a;
                // swap(temp[i], temp[len-1]);
                arr[i]++;
                big = 1;
                flag= 1;
                // cout<<temp;
                break;
            }
            else if(inp[i] > inp[len-1]){
                temp = inp;
                a = temp[len-1];
                temp[len-1] = temp[i];
                temp[i]= a;
                // swap(temp[i], temp[len-1]);
                arr[i]--;
                small = 1;
                flag = 1;
                // cout<<temp;
            }
        }
    }
    // cout<<flag<<"\n";
    if(flag == 1)cout<<temp;
    else cout<<-1;

}
