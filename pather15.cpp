#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;int cont=1,cont2=1;
    fore(i,1,a){
        fore(j,1,a){
            if((i+j-1)<10)
                cout<<j+i-1<<"  ";
            else
                cout<<i+j-1<<' ';
    }
    cout<<'\n';
}
}
main(){
    INI solve();
}