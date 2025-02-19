#include <stdio.h>
#include <iostream>
using namespace std;
#include <ctime>
int main() {
    int year;

    time_t t=time(0);
    tm* now = localtime(&t);
    int yearActual = now->tm_year + 1900;
    cout<<"Ingrese un year de nacimiento : ";
    cin>>year;

    if(year>1900 && year<yearActual){
        cout <<"El year ingresado es valido"<< endl; //ingeniero si todo con year, mi laptop no tiene la enie/
    } else {
        cout<<"El year ingresado no es valido"<< endl;
    }


    return 0;
}
