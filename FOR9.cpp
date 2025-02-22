#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "IngresA un número: ";
    cin >> numero;

    cout << "Los divisores de ese" << numero << " numero son : ";

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
