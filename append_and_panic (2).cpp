#include<bits/stdc++.h> 
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string a;cin>>a;
    set<char>st(a.begin(),a.end());
    cout<<a.size()-st.size();
}
signed main() {
    INI solve();
}