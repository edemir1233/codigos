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
            if(i==1 or i==a or j==1 or(i>=a/2+1 and j==a) or (j>=a/2+1 and i==a/2+1))
                cout<<"G ";
            else
                cout<<"  ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}