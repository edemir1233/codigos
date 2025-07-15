#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int a,b;cin>>a>>b;
    vector<int>vec(a);
    fore(i,0,a-1)
        cin>>vec[i];
    while(b--){
        char c;cin>>c;
        if(c=='X'){
            
        }
        else{
            vec.push_front(c);
        }
    }
}
signed main(){
    INI solve();
}