#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define query int t;cin>>t;while(t--)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n, m;char op;
    cin>>n>>op>>m;
    if(op=='+') cout<<"La suma es: "<<n+m<<'\n';
    else if(op=='-') cout<<"La resta es: "<<n-m<<'\n';
    else if(op=='*') cout<<"La multiplicacion es: "<<n*m<<'\n';
    else if(op=='/') {
        if(m==0 or n==0) cout<<"Division indefinida"<<'\n';
        else cout<<"La division es:"<<n/m<<'\n';
    }
    else if(op=='%') {
        if(m==0 or n==0) cout<<"Division indefinida"<<'\n';
        else cout<<"El residuo es: "<<n%m<<'\n';
    }
    else cout<<"no hay esta operacion en este programa"<<'\n';
}
signed main(){
    INI solve();
}