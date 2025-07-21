#include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            suma += i;
    return suma;
}

bool sonAmigos(int a, int b) {
    return sumaDivisores(a) == b && sumaDivisores(b) == a;
}

int main() {

    int x, y;
    cout << "Ingrese dos números: ";
    cin >> x >> y;


    if (sonAmigos(x, y))
        cout << x << " y " << y << " son números amigos." << endl;
    else
        cout << x << " y " << y << " no son amigos." << endl;

        
    return 0;
}
