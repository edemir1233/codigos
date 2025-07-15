#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int t;cin>>t;cin.ignore();while(t--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string b;
    getline(cin,b);
    int c=-1;
    for(int i=0;i<b.size();i++){
        if(b[i]=='<'){
            int a=1;
            while(i+1<b.size()and b[i+1]=='-'){
                a++,i++;
            }
            c=max(c,a);
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='<'){
            int a=1;
            while(i+1<b.size()and b[i+1]=='='){
                a++;
                i++;
            }
            c=max(c,a);
        }
    }
    for(int i=0;i<b.size(); i++) {
        if(b[i]=='-') {
            int a=1;
            while(i+1<b.size() and b[i+1]=='-'){
                a++;
                i++;
            }
            if(i+1<b.size() and b[i+1]=='>'){
                a++;
                c=max(c,a);
            }
        }
    }
    for(int i=0;i<b.size();i++){
        if (b[i]=='='){
            int a=1;
            while(i+1<b.size() and b[i+1]=='='){
                a++;
                i++;
            }
            if(i+1<b.size() and b[i+1]=='>'){
                a++;
                c=max(c,a);
            }
        }
    }
    cout<<c<<'\n';
}
signed main(){
    INI query solve();
}
