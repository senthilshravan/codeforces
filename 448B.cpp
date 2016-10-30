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
    string inp1, inp2;
    cin >>inp1>>inp2;
    map<char, int> m1, m2;
    rep(i, inp1.length())m1[inp1[i]]++;
    rep(i, inp2.length())m2[inp2[i]]++;
    if(inp1 == inp2)cout<<"array";
    else if(inp1.find(inp2) != string::npos)cout<<"automaton";
    else {
        int flag = 0;
        for(auto i=m2.begin();i != m2.end();i++){
            if(i->second > m1[i->first]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)cout<<"need tree";
        else{
            int flag2 = 1;
            int m, n;
            m = 0;n=0;
            for(n=0;n<inp2.length();n++){
                while(inp1[m] != inp2[n]){
                    m++;
                    if(m>=inp1.length()){
                        flag2 = 0;break;
                    }
                }
                if(flag2 == 0)break;
                else m++;
            }
            if(flag2== 1)cout<<"automaton";
            else if(flag2 == 0 && inp2.length() == inp1.length())cout<<"array";
            else cout<<"both";
        }
        // else if(flag == 0 && inp2.length() == inp1.length())cout<<"array";
        // else cout<<"both";
    }

}
