#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese un numero please ";
    cin>>n;

    if(n % 5 == 0 && n % 7 == 0) {
        cout<< "El numero "<<n  << " si es multiplo de 5 y 7 "<< endl;

    } else {
        cout<< "El numero "<<n  << " no es multiplo de 5 y 7 "<< endl;

    }





    return 0;
}