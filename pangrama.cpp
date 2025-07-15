#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    char b;
    ull a;cin>>a;
    set<char>c;
    fore(i,1,a){
        cin>>b;
        c.insert(tolower(b));
    }
    if(c.size()==26)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
main(){
    INI solve();
}