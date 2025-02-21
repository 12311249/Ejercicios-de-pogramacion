#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int n;

    cout << "Ingrese un numero: " << endl;

    while (suma <= 100) {
        cout << "Ingrese un numero: ";
        cin >> n;
        suma += n;
        cout << "La suma es : " << suma << endl;
    }


    cout << "Superaste el 100, que bien "  << endl;


    return 0;
}