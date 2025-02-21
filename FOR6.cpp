#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Ingrese el valor de n: ";
    cin >> n;

    int current = 0;

    for (int i = 1; current <= n; i++) {
        current += i;
        if (current > n) break;
        cout << current << ", ";
    }

    return 0;
}