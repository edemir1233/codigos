#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int a;cin>>a;
    cout<<((a%9==0)?9:a%9)<<endl;
}
main()
{query{
    INI
    solve();
}
}
