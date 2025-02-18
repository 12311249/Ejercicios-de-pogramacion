#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin >> numero;

    if (numero >0) {
        cout<<"El numero es positivo"<<endl;

    }else if (numero <0){

        cout<<"El numero negativo"<<endl;
        
    }else {
        cout<<"El numero real"<<endl;
    }
    return 0;
}