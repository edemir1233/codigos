#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll suma(ll a,ll b,ll m=1e9)
{
    return(a+=b)<m?:a-m;
}
ll expo(ll b,ll e,ll m)
{
    if(!e)return 1;
    ll q=expo(b,e/2,m);
    q=q*q;
    return(e&1)?b*q:q;
}
main()
{
    int a,b;
    cin>>a>>b;
    cout<<expo(a,b,1e18)<<endl;
}
//int main()
//{
    //INI
    //solve();
//}
