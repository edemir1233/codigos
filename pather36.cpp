#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a;cin>>a;
    fore(i,1,a){
        fore(j,1,a){
            if((i>=a/2+1 and j==a/2+1) or (i+j<=a and i==j) or (j/2+1<=a-i+1 and j==a-i+1 and i<j))
                    cout<<"Y ";
                else
                    cout<<"  ";
            }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}