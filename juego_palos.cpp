#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b;cin>>a>>b;
    ll c=min(a,b);
    cout<<((c%1)?"Akshat":"Malvika");
}
signed main(){
    INI solve();
}
