//da se otpechatat prvite 10 broevi(vo opagjachki redosled) koi se pomali od vnesen broj x i koi se palindromi i delivi so suma na svoite cifri(input: 1000, output: 999 888 828 777...)
#include <iostream>
using namespace std;
bool palidrom(int num) 
{
    int naopakuBr = 0, pochetenBr = num;
    while (num > 0) 
    {
        naopakuBr = naopakuBr * 10 + num % 10;
        num /= 10;
    }
    return pochetenBr == naopakuBr;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int x,i;
    cin >> x;
    int brojach = 0;
    for (i = x - 1; i > 0 && brojach < 10; i--) {
        if (palidrom(i) && i % sumOfDigits(i) == 0) {
            cout << i << " ";
            brojach++;
        }
    }
    cout << endl;
    return 0;
}
