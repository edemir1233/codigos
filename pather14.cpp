#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a;cin>>a;int cont=1;
    fore(i,1,a){
        fore(j,1,a*2-1){
            if (j<=a-i+1 and j>=a+i-1){
                if(cont<10)
                    cout<<cont<<"  ";
                else
                    cout<<cont<<" ";
                cont+=2;
            } else{
                cout<<"   ";
            }
        }
        cout << '\n';
    }
}
signed main(){
    INI solve();
}
