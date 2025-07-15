#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n;cin>>n;
    if(n<=0) 
        return;
    ull a=0,b=1;
    cout<<a<<" ";
    if(n>1) 
        cout<<b<<" ";
    for(int i=2;i<n;i++) {
        ull c=a+b;
        cout<<c<<" ";
        a=b,b=c;
    }
}
signed main(){
    INI solve();
}