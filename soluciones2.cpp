#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
using namespace std;
int sumas(vector<int>vec)
{
    int n=vec.size(),c=1e9;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=vec[i]+vec[j];
            if (abs(sum)<abs(c) or (abs(sum)==abs(c) and sum<c))
            {
                c=sum;
            }
        }
    }
    return c;
}
void solve()
{
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int result=sumas(vec);
        cout<<result<<'\n';
}
main()
{query{
    solve();}
}
