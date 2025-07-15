#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string a;cin>>a;int cont=1;
    for(auto elem:a){
        if(elem>='A' and elem<='Z')
            break;
        else
            cont++;
    }
    cout<<cont;
}
main(){
    INI solve();
}