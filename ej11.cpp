#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    ll l,r;cin>>l>>r;ll cont;
    for(ll i=l;i<=r;i++)
    {
        ll gcd=i;
        for(ll j=i;j<=r;j++){
            gcd=__gcd(gcd,j);
            if(gcd==1){
                cont++;
                break;
            }
        }
    }
    cout<<cont<<'\n';
}
main(){query{
    solve();
}
}
