#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    int N1, N2, N3;
    cout << "Ingrese el primer numero: ";
    cin >> N1;
    cout << "Ingrese el segundo numero: ";
    cin >> N2;
    cout << "Ingrese el terceiro numero: ";
    cin >> N3;

    int mayor;

    if (N1 > N2 && N2 > N3) {
        mayor = N1;

    }else if (N1 > N3 && N3 > N2) {
        mayor = N2;
    }else {
            mayor = N3;

    }
    cout << "El Numero mayor es : "<< mayor << endl;

    return 0;
}