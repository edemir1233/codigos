#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int a,b;cin>>a>>b;int n=1e9+7,e=a;
    if(b==0)
    {
        cout<<1<<'\n';
    }
    else{
    for(ll i=1;i<b;i++,e=(e*a)%n);
    cout<<e<<'\n';}
}
main()
{query{
    solve();
}
}
