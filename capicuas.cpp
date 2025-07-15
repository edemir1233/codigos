#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int n;cin>>n;while(n--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int invertir(ll n){
    ll x=0;
    while(n){
        x=x*10+n%10;
        n/=10;
    }
    return x;
}
void solve(){
    int n;cin>>n;int c=n,c1=0,c2=0,lim=100;
    c1=invertir(n);
    c1+=c;
    while(lim--){
        if(c1==invertir(c1)){
            cout<<c1<<'\n';
            break;
        }
        else{
            c2=invertir(c1);
            c1+=c2;
            c=c1;
        }
    }
}
signed main(){
    INI query solve();
}