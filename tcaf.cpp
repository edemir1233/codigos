#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll r;cin>>r;ll cont=0;
    for(ll i=0;i<=r;++i)
    {
        for(ll j=0;j<=r;++j)
        {
            if((i+0.5)*(i+0.5)+(j+0.5)*(j+0.5)<=(r*r))
                cont++;
            else
                break;
        }
    }
    cout<<cont*4;
}
main(){
    INI solve();
}
