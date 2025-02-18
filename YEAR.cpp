

#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int year;
    cout<<" Ingrese un year: "<<endl;
    cin >> year;


    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "El año " << year << " es bisiesto." << endl;
    } else {
        cout << "El año " << year << " no es bisiesto." << endl;
    }

    return 0;
}
