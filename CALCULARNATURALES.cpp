#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int c = 1;
    int i = 1;

    while (i <= 10) {
        c *= i;
        i++;
    }

    cout << "Calculado de los numeros naturales : "<< c << endl;




    return 0;
}