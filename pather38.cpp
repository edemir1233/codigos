#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i, a, b) for (int i = a; i <= b; i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int c=((n*2)-1)+((n*2-2))*(m-1);
    fore(i,1,n){
        fore(j,1,c){
                cout<<"*";
            }
        cout<<'\n';
    }
    }
signed main(){
    INI solve();
}