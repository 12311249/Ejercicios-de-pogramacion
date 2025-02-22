#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int contador = 0;
    cout << "Los primeros 10 Numeros primos son: " << endl;
    for (int numero = 2; contador < 10; numero++) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
    }

    cout << endl;
    return 0;
}
