#include <iostream>
using namespace std;

/* Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број.
За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  
и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). 
За секој внесен број резултатот треба да се испечати во следниот формат:

[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

342: 9   //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3 */

int zbirNaCifri(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int najgolemaCifra(int num) {
    int cifraNajgolema = 0;
    while (num > 0) {
        int cifra = num % 10;
        if (cifra > cifraNajgolema) {
            cifraNajgolema = cifra;
        }
        num /= 10;
    }
    return cifraNajgolema;
}


int main() {
    int num;
    int prevMaxDigit = 0;

    while (cin >> num) {
        if (num <= 0) continue;

        int currentSum = zbirNaCifri(num);
        int result = currentSum + prevMaxDigit;
        cout << num << ": " << result << endl;

        prevMaxDigit = najgolemaCifra(num);
    }
    return 0;
}
