#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll invertir(ll n){
    ll rev=0;
    while(n>0){
        rev=rev*10+(n%10);n/=10;
    }
    return rev;
}
bool si(ll n){
    return n==invertir(n);
}
void solve(){
        ll n;cin>>n;
        int c=0;
        while(c<100){
            ll r=invertir(n);
            n+=r;
            if(si(n)){
                cout<<n<<'\n';
                break;
            }
            c++;
        }
        if(c==100)
            cout<<"imposible"<<'\n';
}
signed main(){INI
    query{
     solve();
}
}
