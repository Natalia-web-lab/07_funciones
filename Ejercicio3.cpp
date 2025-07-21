#include <iostream>
using namespace std;

void generarFibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Serie Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int cantidad;
    cout << "Cantidad de términos: ";
    cin >> cantidad;
    generarFibonacci(cantidad);
    return 0;
}
