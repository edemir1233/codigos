#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,greater_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
void solve(){
    ordered_set a;
    int n,c;cin>>n;
    fore(i,1,n)
    {
        cin>>c;
        a.insert(c);
    }
    for(auto elem:a)
        cout<<elem<<" ";
    cout<<'\n';
}
signed main()
{
    INI solve();
}