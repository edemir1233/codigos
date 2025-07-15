#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m,c=0;cin>>n>>m;
    while(m>n){
        if(m%2==0){
            m/=2;
        } else{
            m++;
        }
        c++;
    }
    cout<<c+(n-m)<<'\n';
}
signed main(){
    INI solve();
}
