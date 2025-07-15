#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int m;cin>>m;int c=0,n(m);
    while(n--){
        c+=m[n];
    }
    cout<<c<<'\n';
}
signed main(){
    INI solve();
}