#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ll a,b;cin>>a>>b;ll e=1e9+7,n=1,c=a%e;
    while(b>0)
    {
        if(b%2==1)
        {
            n=(n*c)%e;
        }
        c=(c*c)% e,b/=2;
    }
    cout<<n<<'\n';
}
main()
{query{
    solve();
    }
}