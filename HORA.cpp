#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
using namespace std;
int suma(vector<int>vec,string a)
{int c=0;
        vector<int>as;
        string item;
        stringstream ss(a);
        while(getline(ss,item,':'))
        as.push_back(stoi(item));
        c=(as[0]*60+as[1])+vec[0];
        return c;
}
void solve(string a,string b)
{
    vector<int>num;
    int c=0;
    if(b[1]==':' or b[2]==':')
    {
        string item;
        stringstream ss(b);
        while(getline(ss,item,':'))
        num.push_back(stoi(item));
        num[0]=(num[0]*60+num[1]);
        c=suma(num,a);
    }
    else {num.push_back(stoi(b));
    c=suma(num,a);
    }
    if(c/60<=9){
        if(c%60<=9)
    cout<<"0"<<c/60<<':'<<"0"<<c%60<<'\n';
        else
            cout<<"0"<<c/60<<':'<<c%60<<'\n';
    }
    else{
        if(c%60<=9)
            cout<<c/60<<':'<<"0"<<c%60<<'\n';
        else
            cout<<c/60<<':'<<c%60<<'\n';
    }
}
int main()
{string a,b;
    while(true){
    cin>>a>>b;
    if(a=="00:00" and b=="0")
    break;
    else
    solve(a,b);
}
}
