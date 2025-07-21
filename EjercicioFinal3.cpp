#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    if (n <= 0) {
        cout << "[!] La cantidad debe ser mayor a 0." << endl;
        return;
    }

    int a = 0, b = 1, c;

    cout << "Serie de Fibonacci (" << n << " términos): ";
    for (int i = 1; i <= n; i++) {
        cout << a << (i < n ? ", " : "\n");
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int cantidad;
    cout << "¿Cuántos términos desea generar? ";
    cin >> cantidad;
    generarFibonacci(cantidad);
    return 0;
}
