#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;
    fore(i,1,a){
        fore(j,1,a){
            if(i==1 or i==a)
                cout<<"* ";
            else if(i==a/2+1)
                cout<<"* ";
            else
                if(j==a)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
        cout<<'\n';
        }
}
signed main() {
    INI solve();
}