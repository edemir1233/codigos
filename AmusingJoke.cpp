#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define All(vec) vec.begin(),vec.end()
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string a,b,c;cin>>a>>b>>c;
    string m=a+b;
    sort(All(m));sort(All(c));
    if(m==c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
signed main(){
    INI solve();
}
