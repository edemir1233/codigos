#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string a;cin>>a;int cont=a.size();
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            cont-=2;
            i++;
        }
    }
    if(cont==0)
        cont=1;
    cout<<cont<<'\n';
}
main(){
    INI 
    query{
        solve();
    }
}
