#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;
    string b;cin>>b;
    set<char>letters;
    fore(i,1,a){
        if(isalpha(b[i])){
            letters.insert(tolower(b[i]));
        }
    }
    if(letters.size()==26)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
main(){
    INI solve();
}