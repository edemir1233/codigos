#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define forei(i,a,b) for(int i=a;i<b;i++)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;	
typedef long long ll;
using namespace std;
void binario(int n){
    if(n==0) 
        return;
    binario(n/2);
    cout<<(n%2);
}
void solve(){
    int n;cin>>n;
    if(n==0)
        cout<<0;
    else 
        binario(n);
}
signed main(){
    INI solve();
}