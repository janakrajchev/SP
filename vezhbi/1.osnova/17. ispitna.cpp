#include <iostream>
using namespace std;

bool prost(int broj, int n) {
    if (n == 1) return true;
    else {
        if (broj % n != 0) return prost(broj, n - 1);
        else return false;
    }
}

int prevrti(int n) {
    int suma = 0;
    while (n > 0) {
        suma = suma * 10 + n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int a, b;
    cout << "Vnesi go ospegot!" << endl;
    cout << "Vnesi pocetok=";
    cin >> a;
    cout << "Vnesi kraj=";
    cin >> b;

    for (int n = a; n <= b; n++) {
        if (prost(n, n - 1) && (n == prevrti(n)))
            cout << n << "\t";
    }
    cout << endl;

    return 0;
}