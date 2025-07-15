#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int k,n,w;cin>>k>>n>>w;int c=0;
    fore(i,1,w)
        c+=i*k;
    cout<<(c>n?c-n:0);
}
signed main(){
    INI solve();
}