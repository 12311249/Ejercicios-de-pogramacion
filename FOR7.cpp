#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int a = 0, b = 1, nextTerm;
    cout << "Los primeros " << n << " tErminos de la serie de Fibonacci son: ";

    for (int i = 1; i <= n; i++) {
        cout << a << ", ";


        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
