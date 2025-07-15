#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve() {
    ll n;cin>>n;int cont=0;
    fore(i,1,n){
        if(n%i==0)
            cont++;
    }
    if(cont==2)
        cout<<"si";
    else 
        cout<<"no";
}
int main() {
    INI solve();
}
