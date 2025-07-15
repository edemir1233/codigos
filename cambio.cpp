#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void minutos(int men,string b)
{
     vector<int>vec;
    stringstream ss(b);
    string item;
    while(getline(ss,b,':'))
        vec.push_back(stoi(item));
   men+=vec[0];
   cout<<men;
}
void solve()
{  int minu ;string a,b;cin>>a>>b;
    vector<int>vec;
    stringstream ss(a);
    string item;
    while(getline(ss,a,':'))
        vec.push_back(stoi(item));
    minu=vec[0]*60+vec[1];
    minutos(minu,b);
}
main()
{
    INI
    solve();
}

