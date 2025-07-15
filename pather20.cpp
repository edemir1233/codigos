#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;int cont=1;
    fore(i,1,a){
        fore(j,1,a){
            int tam=log2(cont)+1;
            cout<<bitset<32>(cont).to_string().substr(32 - tam) << " ";
            cont++;
        }
        cout<<'\n';
    }
}
main(){
    INI solve();
}