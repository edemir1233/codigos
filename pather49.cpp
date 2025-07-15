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
        fore(j,1,n){
            if( i+j==n+1)
                if(i%2==0 and j%2==1 or i%2==1 and j%2==0)
                    cout<<"* ";
                else
                    cout<<"# ";
            else 
                cout<<"  ";
            d++;
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}