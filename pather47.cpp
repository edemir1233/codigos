#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    fore(i,1,n){
        fore(j,1,n){
            if(j==n/2+1){
                if(i==1){
                    cout<<" "<<'^';
                }
                else if(i==n){
                    cout<<"/|\\";
                }
                else
                    cout<<" |";
            }
            else
                cout<<" ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}