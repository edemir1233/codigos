#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    ll a,b;cin>>a>>b;
    string c;cin>>c;
    ll cont=0;
    fore(i,0,a-1)
        if(c[i]=='S')
            cont++;
    if(cont>=b)
        cout<<a<<'\n';
    else 
        cout<<(a+(b-cont)-1)<<'\n';
}
main(){query{
        solve();
}
}