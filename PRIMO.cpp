#include <stdio.h>
#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;

int primo(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}
    int main(){
        int num;
        cout << "Ingresa un numero: ";
        cin >> num;

    if (primo(num)==1)
        cout <<num<< " Numero primo " << endl;
    else
        cout <<num<< " No es numero primo  " << endl;









    return 0;
}