#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b=1;cin>>a;ll cont=0,c=1e9+7;
    for(int i=1;i<=a%c;i++)
        b=b*i%c;
    for(int i=1;i<=a;i++)
        cont=(cont+(a-i)*2)%c;
    cout<<(b*cont)%c<<'\n';
}
main()
{query{
    solve();
}
}
