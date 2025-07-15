#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;char b;
    for(int i=1;i<=a;i++){
        b='A'+(a-i);
        for(int j=1;j<=i;j++) 
            cout<<b++<<" ";
        cout<<'\n';
    }
    for(int i=1;i<a;i++){
        b='A'+i;
        for(int j=1;j<=a-i;j++) 
            cout<<b++<<" ";
        cout<<'\n';
    }
}
main(){
    INI solve();
}
