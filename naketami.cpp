#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i<b;i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
vector<int>portales_accesibles(int N,int K,vector<int> vec){
    vector<int>r(N,0);
    forei(i,0,N){
        ll n=0;
        forei(j,0,N) {
            if (i!=j and vec[i]%vec[j]==K){
                n++;
            }
        }
        r[i]=n;
    }
     return r;
}
