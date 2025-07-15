#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
using namespace std;
void ejercicio()
{
    int a,b;cin>>a>>b;int c=a;
    for(int i=b;i>=1;i--)
    {
        c=c*a;
    }
    cout<<c/a;
}
main()
{
    INI
    ejercicio();
}
