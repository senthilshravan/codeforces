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
int n, p, pos;
string inp;
int arr[100001];
int result  =0 , pre, flag = 0;
void compute(){
    int val=0;
    int i;
    for(i=0;i<inp.length();i++){
        val = abs(inp[i]-'a') + abs(inp[n-i-1] - 'z')+1 <= abs(inp[i]-'z') + abs(inp[n-i-1] - 'a')+1?abs(inp[i]-'a') + abs(inp[n-i-1] - 'z')+1: abs(inp[i]-'z') + abs(inp[n-i-1] - 'a')+1;
        arr[i] = abs(inp[i] - inp[n-1-i]) <=val?abs(inp[i] - inp[n-1-i]):val;
        // cout<<arr[i]<<" ";
    }
}

ll findr(int i){
    if(i > n/2)return 0;
    else{
        int val = findr(i+1);
        val += arr[i];
        if(val != 0 && pos == p)pos =i;
        // cout<<i<<" "<< arr[i]<<"\n";
        return val==0?0:1+val;
    }
}

int main(){ios :: sync_with_stdio (false);
    cin >> n >> p;
    cin >> inp;
    compute();
    if(p>n/2)p = n-p+1;
    p--;
    n--;
    pre = p;
    for(int i=0;i<p;i++){
        if(flag == 0 && arr[i] == 0)continue;
        else if(flag == 0 && arr[i] != 0){
            flag = 1;
            result += arr[i]+1;
            pre = i;
        }
        else if(flag == 1)result += 1 + arr[i];
    }
    pos = p;
    cout<<findr(p+1)+arr[p]+result+(abs(p- pre)<=abs(p-pos) ? abs(p-pre):abs(p-pos));
}
