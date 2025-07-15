#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b;cin>>a>>b;int c=0;
    vector<vector<int>>m(a,vector<int>(b));
    fore(i,0,a-1){
        fore(j,0,b-1){
            cin>>m[i][j];
        }
    }
    fore(i,0,a-1){
        fore(j,0,b-1){
            if((i+j)%2==0){
                c+=m[i][j];
            }
        }
    }
    cout<<c<<'\n';
}
signed main(){query{
        INI solve();
    }
}
