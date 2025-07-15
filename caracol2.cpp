#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i<b;i++)
typedef unsigned long long ull;	
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int m[n][n],d=n-1,c=1,x=0,y=0;
    m[n/2][n/2]=n*n;
    for(int i=1;i<=(int(double(n)/2)+.5);i++){
        forei(j,0,d)
            m[x++][y]=c++;
        forei(j,0,d)
            m[x][y++]=c++;
        forei(j,0,d)
            m[x--][y]=c++;
        forei(j,0,d)
            m[x][y--]=c++;
        x++,y++,d-=2;
    }
    fore(i,0,n-1){
        fore(j,0,n-1){
            if(m[i][j]<10)
                cout<<m[i][j]<<"  ";
            else
                cout<<m[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main() {
    INI solve();
}