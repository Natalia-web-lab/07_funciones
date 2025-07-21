#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}


float dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: División entre cero no permitida." << endl;
        return 0; 
    }
    return (float)a / b;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    
    int resultadoSuma = suma(num1, num2);
    cout << "La suma de los números es: " << resultadoSuma << endl;

 
    float resultadoDivision = dividir(num1, num2);
    if (num2 != 0) {
        cout << "La división del primer número entre el segundo es: " << resultadoDivision << endl;
    }

    return 0;
}
