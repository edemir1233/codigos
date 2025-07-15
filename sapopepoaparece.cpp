#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;
void solve() {
    int h,w;cin>>h>>w;
    int d=h*2-2,x1=h,x2=h,t=(h*2-1)+(d*(w-1));
    fore(i,1,h){
        fore(j,1,t){
            if(!((j-x1)%d) or !((j-x2)%d))
            cout<<"* ";
            else
            cout<<"  ";
        }
        x1--;x2++;
        cout<<'\n';
    }

}
int main() {
    INI solve();
}
