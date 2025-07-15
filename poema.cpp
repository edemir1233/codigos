#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{string a;getline(cin,a);
for(int i=0;i<a.size();i++){
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
        a[i]='-';}
for(auto elem:a){
    cout<<elem;}
cout<<'\n';
}
main()
{query{
    solve();
}
}
