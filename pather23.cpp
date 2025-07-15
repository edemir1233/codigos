#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;int cont=2;
    fore(i,1,a){
        fore(j,1,i){
            cout<<cont<<' ';
            cont+=2;
        }
        cout<<'\n';
    }
}

int main() {
    INI solve();
}
