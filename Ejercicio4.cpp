#include <iostream>
using namespace std;

bool esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            suma += i;
    return suma == n;
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPerfecto(numero))
        cout << numero << " es un número perfecto." << endl;
    else
        cout << numero << " no es un número perfecto." << endl;

    return 0;
}
