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
    ll n, m;
    cin >> n >> m;
    string result = "";
    if(n>=m+2){cout<<-1;return 0;}
    else if(m > n && m > 2*n+2){cout<<-1;return 0;}
    else{
        if(n == m || n+1==m){
            while(m>0 && n>0){
                result += "10";
                m-=1;n-=1;
            }
            while(m>0){
                // cout<<"adding ";
                result += "1";
                m-=1;
            }
        }
        else if(n<m){
            while(m> 0 && n>0 && n<m){
                result+= "110";
                m-=2;n-=1;
            }
            if(n != 0 && m != 0){
                result += "1";
                m-=1;
            }
            else{
                while(m>0){
                    result += "1";
                    m-=1;
                }
            }
        }

        if(n>m){
            while(m>0 && n>0){
                result += "01";
                m-=1;n-=1;
            }
            while(n>0){
                result+= "0";
                n-=1;
            }
        }
    }
    cout<<result;

}
