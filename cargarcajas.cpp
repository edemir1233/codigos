#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define forn for(int i=1;i<=a;i++;)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int res1=(a/d)*(b/e)*(c/f);
    int res2=(a/d)*(b/f)*(c/e);
    int res3=(a/e)*(b/d)*(c/f);
    int res4=(a/e)*(b/f)*(c/d);
    int res5=(a/f)*(b/d)*(c/e);
    int res6=(a/f)*(b/e)*(c/d);
    cout<<max(res1,max(res2,max(res3,max(res4,max(res5,res6)))))<<'\n';
}
main()
{ while(true)
	solve();
}


