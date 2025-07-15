#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;int c=n;
    fore(i,1,n){
        fore(j,1,n){
            if(i<=j or i==1)
                cout<<c--<<" ";
            else
                cout<<"1 ";
        }
        c=n-i;
        cout<<'\n';
    }         
}
signed main(){
    INI solve();
}