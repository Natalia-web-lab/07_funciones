#include <iostream>
using namespace std;

// Realiza división entera usando restas sucesivas
void divisionRestas(int a, int b) {
    if (a <= 0 || b <= 0) {
        cout << "[!] Ambos números deben ser positivos." << endl;
        return;
    }

    int mayor = max(a, b);
    int menor = min(a, b);
    int cociente = 0;
    int residuo = mayor;

    while (residuo >= menor) {
        residuo -= menor;
        cociente++;
    }

    cout << "Cociente (por restas): " << cociente << endl;
    cout << "Residuo: " << residuo << endl;
}

int main() {
    int x, y;
    cout << "Ingrese dos números positivos: ";
    cin >> x >> y;

    divisionRestas(x, y);
    return 0;
}
