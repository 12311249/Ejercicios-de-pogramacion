#include <iostream>
using namespace std;

int* fibonacci(int limite, int &size) {
    static int fib[100];
    int a = 0, b = 1, siguiente;

    fib[0] = a;
    fib[1] = b;
    size = 2;

    siguiente = a + b;
    while (siguiente <= limite) {
        fib[size] = siguiente;
        a = b;
        b = siguiente;
        siguiente = a + b;
        size++;
    }
    return fib;
}

int main() {
    int numero, size;

    cout << "Ingrese un numero límite para la secuencia de Fibonacci: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un número positivo." << endl;
    } else {
        int* sequence = fibonacci(numero, size);
        cout << "Secuencia de Fibonacci hasta " << numero << ":\n";
        for (int i = 0; i < size; i++) {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }

    return 0;
}