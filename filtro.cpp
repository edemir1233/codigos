#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;cin.ignore();while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a;cin>>a;ll cont=0;
    vector<ll>b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
        if((b[i]*2)%3==0){
            cont+=b[i]*2;
        }
    }
    cout<<"La suma es "<<cont<<'\n';
}
signed main(){
    INI query solve();
}