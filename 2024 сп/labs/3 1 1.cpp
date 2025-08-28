#include <iostream>
using namespace std;
//se vnesuvaat dva broevi a i b, b e broj od 0 do 9, da se najde kolku pati se naogja b vo a (12334 3 : 2)

int main() {
    int X, K;
    cin >> X >> K;
    int countK = 0;
    int posledna_cifra = 0;
    int temp = X;
    while (temp > 0) {
        int br = temp % 10;
        if (br <  K) {
            countK++; }
        posledna_cifra++;
        temp /= 10;
    }
    double procent = (double) countK / posledna_cifra * 100;
    cout << procent << "%" << endl;
}
