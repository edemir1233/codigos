#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
typedef long long ll;
using namespace std;
vector<bool> es_primo(10001,true);
void calcular_primos()
{
    es_primo[0]=es_primo[1]=false;
    for(int i=2;i*i<=10000;i++)
        {
        if(es_primo[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                es_primo[j]=false;;
        }
    }
}
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
        if(x!=y) padre[x]=y;
    }
};
void solve()
{
    calcular_primos();
    while(true)
        {
        int n,m;
        cin>>n>>m;
        if(n==0 and m==0) 
            break;
        int r=m-n+1;
        union_find grafo(r);
        for(int i=0;i<r;i++)
        {
            for(int j=i+1;j<r;j++)
                {
                if(es_primo[n+i+n+j])
                {
                    grafo.unir(i,j);
                }
            }
        }
        vector<bool>cont_padre(r,false);
        int c=0;
        for(int i=0;i<r;i++){
            int c=grafo.buscar(i);
            if(!cont_padre[c]){
                cont_padre[c]=true;
                c++;
            }     
        }
        cout<<c<<'\n';
    }
}
int main()
{
    solve();
}