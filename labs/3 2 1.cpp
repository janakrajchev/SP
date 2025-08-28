// se vnesuva broj x i cifra k. da se otpechati vo procenti kolku od site cifri na x se pomali od k (12345 5 : 80%)

#include <iostream>
using namespace std;

int main() {
    int x, k;
    cin >> x >> k;

    int brojach = 0;
    int vkCifri = 0;  
    int temp = x;

    while (temp > 0) {
        int br = temp % 10;
        if (br < k) {
            brojach++; 
        }
        vkCifri++;
        temp /= 10;
    }

    double percentage = (double)brojach / vkCifri * 100;
    cout << k << "%" << endl;

    return 0;
}
