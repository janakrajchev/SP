#include <iostream>
using namespace std;

int zbir(int broj) {
    if (broj < 10)
        return broj;
    else
        return broj % 10 + zbir(broj / 10);
}

int main() {
    int broj;
    cin >> broj;

    cout << zbir(broj) << endl;
    return 0;
}