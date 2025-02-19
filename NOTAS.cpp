#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int notas;
    cout << "Ingrese una nota: ";
    cin >> notas;

    char letras;
    if (notas >= 90 && notas <= 100) {
        letras = 'A';
    } else if (notas >= 80 && notas <= 89) {
        letras = 'B';
    } else if (notas >= 70 && notas <= 79) {
        letras = 'C';
    } else if (notas >= 60 && notas <= 69) {
        letras = 'D';
    } else if (notas >= 0 && notas <= 59) {
        letras = 'E';
    } else {
        cout << "Ingrese una nota entre 0 y 100 "<< endl;
        return 1;
    }
    cout << "La Nota final es de : " << letras << endl;



    return 0;
}