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

int isPossible(int m, int sum){
    return (9*m >=sum&& sum>=0) ? 1:0;
}


int main(){ios :: sync_with_stdio (false);
    int m , s, s2, j1, j2;
    cin >> m >> s;
    s2 = s;
    if(s == 0 && m==1){cout<<"0 0";return 0;}
    else if(s == 0){cout<<"-1 -1";return 0;}
    string result="!", result1="!";
    for(int i=1;i<=m;i++){
        for(int j=0;j<=9;j++){
            if(!(i==1 && j==0) && isPossible(m-i, s-j)){
                if(result == "!")result = ('0' + j);
                else result += ('0'+j);
                s -= j;
                break;
            }
        }
        for(int j=9;j>=0; j--){
            if(!(i==1 && j==0) && isPossible(m-i, s2-j)){
                if(result1 == "!")result1 = ('0' + j);
                else result1 += ('0'+ j);
                s2 -= j;
                break;
            }
        }
    }
    if(result == "!")cout<<"-1 -1";
    else{
        cout<<result<<" "<<result1;
    }
}
