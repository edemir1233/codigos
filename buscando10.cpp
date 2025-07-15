#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{42222222
    string s;
    getline(cin, s);
    int b=0,c=0;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]!=',' and s[i]!=' ')
        {
            b+=s[i]-'0';
            c++;
        }
    }
    float x=((9.5*c)-b);
    if(x<0)
        cout<<0;
    else
        cout<<x*2;
}
main()
{
    INI
    solve();
}
