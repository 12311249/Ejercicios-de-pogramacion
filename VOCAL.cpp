#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    char letra;
    cout << "Ingrese una letra : ";
    cin >> letra;

    letra = tolower(letra);
    if (!isalpha(letra)) {
        cout << "Debes ingrear una letra" << letra << endl;
    }
    else if (letra == 'a'||letra == 'e'||letra == 'i'||letra == 'o'||letra == 'u') {
        cout <<"La letra ingresada es vocal " << letra << endl;
    }
    else {
        cout <<"La letra ingresa es una consonante" << endl;
    }



    return 0;
}