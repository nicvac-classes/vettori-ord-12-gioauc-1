#include <iostream>
using namespace std;

int main() {
    int n, i, j, t;
    cout << "Inserisci il numero di elementi del vettore" << endl;
    cin >> n;
    int r[n];
    for (i = 0; i <= n - 1; i++) {
        r[i] = random(N * 10 + 1);
    }
    cout << "Valori generati:" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "Elemento " << i << ": " << r[i];
    }
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 2; j++) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
            }
        }
    }
    cout << "Valori ordinati:" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "Elemento " << i << ":" << r[i] << endl;
    }
    return 0;
}