#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ull a;
    string b;
    cin>>a;
    cin>>b;
    string al="ABC";
    string ed="BABC";
    string ga="CCAABB";
    ull cont=0,cont1=0,cont2=0;
    for(ll i=0;i<a;++i)
    {
        if(b[i]==al[i%al.size()])
            cont++;
        if(b[i]==ed[i%ed.size()])
            cont1++;
        if(b[i]==ga[i%ga.size()])
            cont2++;
    }
    int maxi=max(cont,max(cont1,cont2));
    cout<<maxi<<'\n';
    if(cont==maxi)
        cout<<"Alvaro"<<'\n';
    if(cont1==maxi)
        cout<<"Edwin"<<'\n';
    if(cont2==maxi)
        cout<<"Gabriel"<<'\n';
}
main()
{query{
    solve();}
}
