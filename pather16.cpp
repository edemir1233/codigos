#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;int cont=1;
    fore(i,1,a/2+1){
        fore(j,1,a-i)
            cout<<"  ";
        for(int j=i;j>=1;j--) 
            cout<<cont<<" ";
            cont++;
        fore(j,2,i)
            cout<<j<<" ";
        cout<<'\n';
    }
}
int main(){
    INI solve();
}
