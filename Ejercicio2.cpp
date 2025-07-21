#include <iostream>
using namespace std;


void divisionRestas(int a, int b) {
    int mayor, menor;
    
    
    if (a > b) {
        mayor = a;
        menor = b;
    } else {
        mayor = b;
        menor = a;
    }

  
    if (menor == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return;
    }

    int cociente = 0;
    int residuo = mayor;


    while (residuo >= menor) {
        residuo -= menor;
        cociente++;
    }

 
    cout << "Cociente: " << cociente << endl;
    cout << "Residuo: " << residuo << endl;
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer número positivo: ";
    cin >> num1;
    cout << "Ingrese el segundo número positivo: ";
    cin >
