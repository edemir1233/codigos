#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve(){
    int n;cin>>n;int cont=1;
    fore(i,1,n/2+1){
        fore(j,1,n-i) 
            cout<<" ";
        fore(j,1,2*i-1) 
            cout<<cont;
        cout<<'\n';
        cont++;
    }
    for(int i=n/2;i>=1;i--){
        fore(j,1,n-i) 
            cout<<" ";
        fore(j,1,2*i-1) 
            cout<<cont;
        cout<<'\n';
        cont++;
    }
}
main(){ 
    INI solve(); 
}
