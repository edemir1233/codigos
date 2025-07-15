#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    int ini=(m/3)+bool(m%3);
    int fin=(m/2)+(m%2);
    if(n>=ini and n<=fin){
        while(n!=0){
            if(m==1){
                cout<<"X";
                n--;m--;
            }
            if(m/3<n){
                cout<<"-X";
                n--;m-=2;
            }
            if(m%n==0){
                cout<<"-X-";
                n--;m-=3;
            }
        }
    }
    
}
signed main(){
    INI solve();
} 