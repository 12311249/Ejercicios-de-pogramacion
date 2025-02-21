#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    int n = 0;
    int num, suma=0;
    float media;

    cout << "Numeros a ingresar : ";
    cin >> n;

    if (n <= 0) {
        cout << "No es mayor que 0 "<< endl;
        return 1;
    }
    int i = 1;
    while (i <= n) {

        cout << "Ingresar el numero : " << i << " ; ";
        cin >> num;
        suma += num;
        i++;
    }

    media = static_cast<float>(suma)/n;
    cout << "El media es: " << media << endl;





    return 0;
}