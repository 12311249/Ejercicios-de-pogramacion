#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    double precio,porcentaje_descuento,descuento,preciofinal;
    cout<<"Ingrese el precio del articulo : ";
    cin>>precio;

    cout<<"Ingrese el porcentaje del descuento: ";
    cin>>porcentaje_descuento;

    descuento=(precio*porcentaje_descuento)/100;

    preciofinal = precio - descuento;
    cout<<"El precio final del descuento es : "<<preciofinal<<endl;




    return 0;
}