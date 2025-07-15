#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve() {
    int n,m;cin>>n>>m;int x,y,x1,y1;
    char m1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
            if(m1[i][j]=='S')
                x=i,y=j;
            else if(m1[i][j]=='D')
                x1=i,y1=j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<'\n';
    }
} 
int main() {
    INI solve();
}
