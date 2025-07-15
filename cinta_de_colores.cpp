#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
typedef long long ll;
using namespace std;

void solve() {
    ll a, c; // ancho de la cinta y largo del corte
    while (cin >> a >> c) { // leer múltiples casos hasta EOF
        vector<int> cinta(a, 1); // iniciar cinta con el primer número (111... de longitud a)
        
        // Simular el crecimiento de la cinta hasta alcanzar el largo c
        for (ll i = 1; i < c; i++) {
            cinta[a - 1]++; // incrementar la unidad (última posición)
            
            // Manejar "rebotes" (similar a un acarreo en un sistema base 9)
            for (ll j = a - 1; j >= 0; j--) {
                if (cinta[j] > 9) { // si la posición excede 9, se reinicia a 1
                    cinta[j] = 1;
                    if (j > 0) cinta[j - 1]++; // incrementar la posición anterior
                }
            }
        }
        
        // Imprimir los últimos valores de la cinta como un único número
        for (int x : cinta) {
            cout << x;
        }
        cout << '\n';
    }
}

int main() {
    INI;
    solve();
    return 0;
}