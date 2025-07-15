#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ull n;cin>>n;int c=0;
    fore(i,1,n){
        if(c>n){
            break;
            cout<<c;
        }
        else{
            n-=i;
            c+=i;
        }
    }
    cout<<c<<'\n';
}
signed main(){
    INI solve();
}
