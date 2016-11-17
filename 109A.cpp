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
    int num, temp, flag =0, no4 = 0, no7 = 0;
    string result = "";
    cin >> num;
    //while(num > 28){
    //    result += "7777";
    //    num -= 28;
    //}
    while(num%4 != 0 || (num%7 == 0) && num>0){
        num -= 7;
        no7++;
    }
    if(num < 0)cout<<-1;
    else{
        while(num > 0){
            num -= 4;
            no4++;
        }
        no7 += no4/7 *4;
        no4 = no4%7;
        rep(i, no4)result += "4";
        rep(i, no7)result += "7";
        cout<<result;
    }
}
