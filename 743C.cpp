#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin >>n;
    if(n!=(n*(n+1)) && n+1!=(n*(n+1)))
        cout<<n<<" "<<n+1<<" "<<(n*(n+1));
    else cout<<-1;
}
