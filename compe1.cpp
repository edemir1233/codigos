#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ull a,b,c;cin>>a>>b>>c;
    ull cl=a*b*c, base=0,expo=0;
    for(int i=2;i<16;i++){
            double t=pow(cl,float(1)/float(i));
            ull r=round(t);
            //cout<<i<<" "<<cl<<" "<<;
        if(cl==pow(r,i)){   
            base=r;
            expo=i;
            break;
        }
    }
    cout<<base<<" a la "<<expo;
}
signed main(){
     query{
    solve();
}
}
