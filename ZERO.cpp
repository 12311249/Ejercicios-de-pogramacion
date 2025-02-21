#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int Numero;
    do {
        cout << "Ingrese un numero: ";
        cin >> Numero;
    }while(Numero !=0);
    cout << "Fin del programa, llegaste a 0 " << endl;




    return 0;
}