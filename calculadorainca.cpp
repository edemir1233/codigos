#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{   int con=0;
    string a;cin>>a;
    for(int i=0;i<a.size();i++)
    {if(i<5)
        {
            if(a[i]=='1')
                con+=5;
        }
        else if(i<8){
            if(a[i]=='1')
            con+=3;
            }
        else if(i<10){
            if(a[i]=='1')
            con+=2;
            }
        else if(i<12)
            if(a[i]=='1')
            con++;
    }
    cout<<con<<'\n';
}
main()
{query{
    INI
    solve();}
}


