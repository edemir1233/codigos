#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;int i=0,s=0;
    if(!(int(log10(n)+1)&1))
        i++;
    while(n!=0){
        if(!(i&1))
            s+=n%10;
            n/=10,i++;
    }
    cout<<s;
}
signed main(){
    INI solve();
}