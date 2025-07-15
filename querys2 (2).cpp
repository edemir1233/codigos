#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std; 
struct segment_tree{
    vector<int>arbol;int n;
    void construir(vector<int>&vec,int ini,int fin,int nodo){
        if(ini==fin) arbol[nodo]=vec[ini];
        else{
            int medio=(ini+fin)/2;
            construir(vec,ini,medio,2*nodo+1);
            construir(vec,medio+1,fin,2*nodo+2);
            arbol[nodo]=arbol[2*nodo+1]*arbol[2*nodo+2];
        }
    }
    int query(int nodo,int inicio,int fin,int l,int r){
        if(r<inicio or l>fin) return 1;
        if(l<=inicio and fin<=r) return arbol[nodo];
        int medio=(inicio+fin)/2;
        return query(2*nodo+1,inicio,medio,l,r)*query(2*nodo+2,medio+1,fin,l,r);
    }
    void update(int nodo,int inicio,int fin,int pos,int val){
        if(inicio==fin) arbol[nodo]=val;
        else{
            int medio=(inicio+fin)/2;
            if(pos<=medio)
                update(2*nodo+1,inicio,medio,pos,val);
            else 
                update(2*nodo+2,medio+1,fin,pos,val);
            arbol[nodo]=arbol[2*nodo+1]*arbol[2*nodo+2];
        }
    }
    segment_tree(vector<int>&vec){
        n=vec.size();
        arbol.assign(4*n,1);
        construir(vec,0,n-1,0);
    }
    int query(int l,int r){return query(0,0,n-1,l,r);}
    void update(int pos,int val){update(0,0,n-1,pos,val);}
};
void solve(){
    int a,b;cin>>a>>b;
    vector<int>vec(a);
    fore(i,0,a-1) 
        cin>>vec[i];
    segment_tree st(vec);
    while(b--){
        char c;int x,y;cin>>c>>x>>y;
        if(c=='?')
            cout<<st.query(x,y)<<'\n';
        else
            st.update(x,y);
    }
}
signed main(){
    INI solve();
}