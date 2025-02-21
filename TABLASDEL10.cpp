#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int numero;

    cout<<"Ingrese una tabla: ";
    cin >> numero;

    cout<<" tabla de multiplicar "<<numero << " es: "<< endl;
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero*i << endl;
    }





    return 0;
}