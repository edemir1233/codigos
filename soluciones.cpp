#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    int a,c=0,men=1e9,mon=1e9;cin>>a;vector<int>vec(a);
    for(int i=0;i<a;i++)
    cin>>vec[i];
    for(int i=0;i<a/2+1;i++)
    { if(i==a/2-1){
        c=vec[i];
    }
    else{
            c=(vec[i])+(vec[a-i-1]);
        }
        men=min(c,men
main()
{

    query
    solve();
}
