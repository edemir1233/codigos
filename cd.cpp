#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n; cin >> n; while(n--)
#define fore(i,a,b) for(int i = a; i <= b; i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

void solve() {
    int M, K;
    cin >> M >> K;

    string S;
    cin >> S;

    int swish_count = count(S.begin(), S.end(), 'S'); // Contar 'S' en la cadena

    int N = (swish_count >= K) ? M : M + (K - swish_count);

    cout << N << "\n";
}

main() {
    INI
    query {
        solve();
    }
}
