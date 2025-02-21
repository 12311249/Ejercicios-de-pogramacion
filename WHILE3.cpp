#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma =0;
    cout<<"Ingrese un numero entero:\n";

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break;
        }
        suma += numero;
    }

    cout <<"La suma es " << suma << endl;


    return 0;
}