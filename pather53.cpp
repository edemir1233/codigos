#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    fore(i,0,n-1){
        fore(j,0,n-1){
            if(i+j>=n-1)
                cout<<s[i+j-(n-1)]<<" ";
            else
                cout<<"  ";
        }
        cout<<'\n';
    }
}
signed main(){
    INI solve();
}
