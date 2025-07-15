#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;int d=1;
    fore(i,1,n){
        fore(j,i+1,n){
            cout<<" ";
        fore(j,1,d)
            if(j==1 or j==d)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}