#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(ull i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ull a,b,c=0;cin>>a>>b;
    fore(i,a,b){
        ull c1=i%10;
        if(c1 and i%c1==0) 
            c++;
    }
    cout<<c<<'\n';
}
signed main(){
    INI 
    query{solve();}
}