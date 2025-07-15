#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve() {
    int a;cin>>a;int c,d;
    vector<int> vec(a);
    set<int> s;
    fore(i, 0, a-1){
        cin>>vec[i];
        s.insert(vec[i]);
    }
    sort(vec.begin(), vec.end());
    fore(i, 0, a-1){
        if(vec[i]==vec[i+1] && d==1)
            c+=s.size()-1,d=0;
        else
            d=1;
    }
}

int main() {
    INI
    solve();
    return 0;
}