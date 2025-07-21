#include <iostream>
using namespace std;


int suma(int a, int b) {
    return a + b;
}


float dividir(int a, int b) {
    if (b == 0) {
        cout << "[!] Error: No se puede dividir entre cero." << endl;
        return 0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int num1, num2;

    cout << "Ingrese dos números enteros: ";
    cin >> num1 >> num2;

    cout << "Resultado de la suma: " << suma(num1, num2) << endl;
    cout << "Resultado de la división: ";
    dividir(num1, num2);  
    return 0;
}
