#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve(){
    vector<string>a;
    set<string>c;
    string b;
    while(cin>>b)
    {
        a.push_back(b);
    }
    for(auto elem:a)
        for(auto elem2:a)
            if(elem!=elem2)
                c.insert(elem+elem2);
    for(auto elem:c)
        cout<<elem<<'\n';
}
signed main(){
    solve();
}
