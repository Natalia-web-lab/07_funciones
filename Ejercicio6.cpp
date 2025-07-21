#include <iostream>
using namespace std;

bool esPositivo(int n) {
    return n > 0;
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPositivo(numero))
        cout << numero << " es positivo." << endl;
    else
        cout << numero << " no es positivo." << endl;

    return 0;
}
