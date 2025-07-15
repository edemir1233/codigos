#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m=4;cin>>n;
    int matriz[n][m],c=1;
    fore(i,0,n-1){
        if(i&1){
            for(int j=m-1;j>=0;j--)
                matriz[i][j]=c++;
        }else
        {
            fore(j,0,m-1)
                matriz[i][j]=c++;
        }
    }
    fore(i,0,n-1){
        fore(j,0,m-1){
            cout<<matriz[i][j]<<" ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}