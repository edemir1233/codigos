#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    ull n,q,cont=0;cin>>n>>q;
    vector<int>vec(n);
    fore(i,0,n-1)
        cin>>vec[i];
    while(q--){
        char a;cin>>a;
        if(a=='?'){
            ull b,c;cin>>b>>c;
            cont=0;
            for(auto elem:vec)
                if(elem>=b and elem<=c)
                    cont;
            cout<<cont<<'\n';
        }
        else{
            ull b,c;cin>>b>>c;
            vec[b-1]=c;
        }
    }
}
main(){
    INI solve();
}