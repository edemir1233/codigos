#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
typedef long long ll;
using namespace std;
void solve() {
    string a;
    cin >> a;
    if (cin.peek() != '\n') {
        int b;
        cin >> b;
        vector<int> a_time(2);
        stringstream ss_a(a);
        string item;
        int i = 0;
        while (getline(ss_a, item, ':')) {
            a_time[i++] = stoi(item);
        }
        int total_minutes = (a_time[0] * 60 + a_time[1]) + b;
        int hours = total_minutes / 60;
        int minutes = total_minutes % 60;
        cout << hours << ":" << setfill('0') << setw(2) << minutes << endl;
    } else {
        string b;
        cin >> b;
        vector<int> a_time(2), b_time(2);
        stringstream ss_a(a), ss_b(b);
        string item;
        int i = 0;
        while (getline(ss_a, item, ':')) {
                a_time[i++] = stoi(item);
            }
        i = 0;
        while (getline(ss_b, item, ':')) {
            b_time[i++] = stoi(item);
        }
        int total_minutes = (a_time[0] * 60 + a_time[1]) + (b_time[0] * 60 + b_time[1]);
        int hours = total_minutes / 60;
        int minutes = total_minutes;
}
}
int main(){
    INI solve();
}
