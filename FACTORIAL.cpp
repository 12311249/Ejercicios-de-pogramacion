#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    int f;
    long long factorial = 1;

    cout <<"Ingrese un numero : ";
    cin >> f;

    if(f<1) {
        cout<<"El numero es mayor a 0 ";
    }else {
        for (int i = 1; i <= f; i++) {
            factorial *= i;
        }
    }

    return 0;
}