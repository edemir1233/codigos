#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a;cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if( j==i or i+j-1==a)
                cout<<"* ";
            else 
                cout<<"  ";
        }
        cout<<'\n';
    }
}
main(){
    INI solve();
}