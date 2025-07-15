#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    int b; cin>>a[0]>>b;
    bool c=true;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(!(a[i] >= a[i-1] || b-a[i] >= a[i-1]))
            c=false;
    }
    if(c)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}
main(){
    INI 
    query solve();
}
