#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    fore(i,1,n){
        fore(k,1,m){
            if(k==m){
                fore(j,1,n*2){
                    if(j==n-i+1 or j==n+i-1)
                        cout<<"* ";
                    else
                        cout<<"  "; 
                }
            }
            else{
            fore(j,1,n*2-2){
                if(j==n-i+1 or j==n+i-1)
                    cout<<"* ";
                else
                    cout<<"  "; 
            }
    }
}
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}