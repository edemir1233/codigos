#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;char b=65;
    for(int i=1;i<=a;i++){
        for(int j=0;j<a-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<b<<' ';
        }
        cout<<'\n';
        b++;
    }
}
main(){
    INI solve();
}
