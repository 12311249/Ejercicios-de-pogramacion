#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Ingrese un numero: ";
    cin >> number;

    cout << "Numero pares "<< number << ":\n";
    int i=2;
    while(i<=number) {
        cout << i << " ";
        i +=2;
    }

    cout << endl;






    return 0;
}