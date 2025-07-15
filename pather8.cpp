#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;int cont=1;
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=a*2-1;j++)
        {
            if(j == i || j == a*2-i)
                cout << cont << ' ';
            else
                cout << '  ';
        }
        cout << '\n';
        cont++;
    }
}
main(){
    INI solve();
}