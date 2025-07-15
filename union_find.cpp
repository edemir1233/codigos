#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
struct union_find{
    vector<int> padre;
    union_find(int v)
    {
        padre.resize(v);
        for(int i=0;i<v;i++)
            padre[i]=i;
    }
    int buscar(int a){
        if(padre[a]!=a)
            padre[a]=buscar(padre[a]);
        return padre[a];
    }
    void unir(int x,int y)
    {
        x=buscar(x);
        y=buscar(y);
        if(x!=y) 
            padre[x]=y;
    }
};
void solve(){
    ll n,m;cin>>n>>m;union_find grafo(n+1);
    while(m--){
        int x,y,c;
        cin>>x>>y;
    }
}
main(){
    INI solve();
}