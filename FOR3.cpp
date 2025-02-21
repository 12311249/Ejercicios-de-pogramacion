#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int p, suma = 0;
    cout << "Ingresa algun numero  postivo : ";
    cin >> p;

    if (p <= 0) {
        cout << "Ingresa un numero  postivo  ";
        return 1;
    }

    for (int i = 2; i <= p; i+=2) {
        suma += i;
    }

    cout<< "La suma de los pares "<< p << " es: " << suma << endl;





}