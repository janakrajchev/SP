#include <iostream>
#include <cmath>
using namespace std;
int broj(int n, int x) {
    int brojac = 0;
    int lengthX = 0;
    int temp = x;
    while (temp > 0) {
        lengthX++;
        temp /= 10;
    }
    while (n > 0) {
        int part = n % (int)pow(10, lengthX);
        if (part == x) {
            brojac++;
        }
        n /= 10;
    }
    return brojac;
}

int main() {
    int x, n;
    cin >> x;
    while (cin >> n) {
        cout << broj(n, x) << endl;
    }
    return 0;
}