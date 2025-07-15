#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define All(vec) vec.begin(),vec.end()
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>vec(n);
    fore(i,0,n-1)
        cin>>vec[i];
    sort(All(vec));
    int c=1;
    fore(i,0,n-1){
        if(vec[i]!=vec[i+1]){
            cout<<vec[i]<<" ->" <<c<<'\n';
            c=1;
        }
        else
            c++;
    }
}
signed main(){
    INI solve();
}
