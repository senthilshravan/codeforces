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

ll power(int i, int val, int b){
    if(i == 1)return val;
    else if(i == 2)return val%b * val%b;
    else if(i %2 == 0){
        ll temp = power(i/2, val, b);
        return (temp%b*temp%b)%b;
    }
    else{
        ll temp = power(i/2, val, b);
        return ((temp %b * temp%b)%b * val)%b;
    }
}


int main(){ios :: sync_with_stdio (false);
    ll a, b;
    string inp;
    cin >>inp>>a>>b;
    int totaldigits = (int)inp.length();
    int n = totaldigits;
    int t1[n+1], t2[n+1];
    t1[0] = (inp[0]-'0')%a;
    t2[totaldigits-1] = (inp[totaldigits-1] - '0')%b;
    for(int i=1;i<totaldigits;i++){
        t1[i] = ((inp[i] - '0') + t1[i-1]*10)%a;
        t2[n-i-1] = ((inp[n-i-1] - '0')*power(i, 10, b) + t2[n-i])%b;
    }
    int flag = 0;
    for(int i=1;i<n;i++){
        if(t1[i-1] == 0 && t2[i] == 0 && inp[i] != '0'){
            string resa(inp.begin(), inp.begin()+i);
            string resb(inp.begin()+i, inp.end());
            cout<<"YES\n"<<resa<<"\n"<<resb;
            flag = 1;break;
        }
    }
    if(flag == 0)cout<<"NO";

}



// else cout<<"NO";
// while(divi != 1){
//     t1 = inp/divi;
//     t2 = inp%divi;
//     // cout << t1 <<" "<< t2<<" "<<floor(log10(t1))+1+floor(log10(t2))+1;
//     if(totaldigits == floor(log10(t1))+1+floor(log10(t2))+1 && t1 %a == 0 && t2%b==0){
//         flag = 1;
//         break;
//     }
//     divi/=10;
//     // cout<<"\n";
// }
// if(flag == 1){
//     cout<<"YES\n"<<t1<<" "<<t2;
// }
