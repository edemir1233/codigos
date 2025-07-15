#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if((i&1 and j%2==0) or (j%2==1 and i%2==0))
                cout<<'0';
            else
                cout<<'1';
        }
         cout<<'\n';
    }
}
main(){
    INI solve();
}