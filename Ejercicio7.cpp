#include <iostream>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

long long combinatoria(int n, int m) {
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main() {
    int n, m;
    cout << "Ingrese n y m: ";
    cin >> n >> m;

    if (m > n || n < 0 || m < 0) {
        cout << "Datos inválidos." << endl;
    } else {
        cout << "C(" << n << ", " << m << ") = " << combinatoria(n, m) << endl;
    }

    return 0;
}
