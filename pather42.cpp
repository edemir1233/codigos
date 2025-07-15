#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define forei(i,a,b) for(int i=a;i<b;i++)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;	
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int t=n;
    int m[t][t],d=t-1,c=n,x=0,y=0;
    m[t/2][t/2]=1;
    fore(i,1,t){
        forei(j,0,d) 
            m[x][y++]=c;
        forei(j,0,d) 
            m[x++][y]=c;
        forei(j,0,d) 
            m[x][y--]=c;
        forei(j,0,d) 
            m[x--][y]=c;
        x++,y++,d-=2,c-=2;
    }
    fore(i,0,t-1){
        fore(j,0,t-1){
            cout<<m[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main() {
    INI solve();
}