#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
using namespace std;
void solve()
{
    int tt;
    cin>>tt;
    while(tt!=0)
    {
        string a;
        cin>>a;
        if(a.size()<=10)
            cout<<a<<'\n';
        else
        cout<<a[0]<<a.size()-2<<a[a.size()-1]<<'\n';
        tt--;
    }
}
main()
{
    INI
    solve();
}
