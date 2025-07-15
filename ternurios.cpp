#include <bits/stdc++.h>
#include"ternurios.h"
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int max_ternurios(int N,vector<int>vec){
    int c=0,c1=0;
    fore(i,0,N-1){
        if(i&1)
            c+=vec[i];
        else
            c1+=vec[i];
    }
    return max(c,c1);
}
