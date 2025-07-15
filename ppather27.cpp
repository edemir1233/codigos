#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;
    if (a&1)
        a-=1;
    fore(i,1,a){
        fore(j,1,a){
            if(i==1 or i==a or i==(a+1)/2)
                cout<<"*";
            else if(i<(a+1)/2 and j==a)
                cout<<"*";
            else if(i>(a+1)/2 and j==1) 
                cout<< "*";
            else
                cout<<" ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}