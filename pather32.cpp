#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;	
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int t=n*2-1;
    int m[t][t],d=t-1,c=n,x=0,y=0;
    m[t/2][t/2]=1;
    for(int i=1;i<=t;i++){
        for(int j=0;j<d;j++) 
            m[x][y++]=c;
        for(int j=0;j<d;j++) 
            m[x++][y]=c;
        for(int j=0;j<d;j++) 
            m[x][y--]=c;
        for(int j=0;j<d;j++) 
            m[x--][y]=c;
        x++,y++,d-=2,c--;
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