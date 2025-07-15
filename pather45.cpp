#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;
    fore(i,1,a){  
        fore(j,1,a){
            if(j==a/2+1 or i==a/2+1)
                cout<<"* ";
            else 
                cout<<"  ";
        }
        cout<<'\n';
    }
}

int main() {
    INI solve();
}
