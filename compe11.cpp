#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ll a,b;cin>>a>>b;ll current_digit=1,position=1;
    while(position+a<=b)
    {
        position+=a,current_digit++;
        if(current_digit>9)
            current_digit=1;
    }
    for(int i=0;i<a;i++)
        cout<<current_digit;
    cout<<'\n';
}
int main()
{
    INI
    solve();
}
