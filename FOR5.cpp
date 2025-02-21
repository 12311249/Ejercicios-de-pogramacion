#include <stdio.h>
#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    cout << "Numeros primos del 1 al 50:" << endl;
    for (int i = 1; i <= 50; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}