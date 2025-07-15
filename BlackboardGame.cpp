#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;while(t--)
typedef unsigned long long ull; 
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    if(n%4==0)
        cout<<"Bob\n";
    else
        cout<<"Alice\n";
}
signed main(){  
    INI query solve();
}
