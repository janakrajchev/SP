/*Од стандарден влез се читаат знаци се додека не се прочита извичник. 
Во вака внесениот текст се скриени цели броеви (помали од 100).
 Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде 
noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    int sum = 0;
    int currentNumber = 0;
    bool isBuildingNumber = false;

    cin >> noskipws;
    while (cin >> ch) {
        if (ch == '!') {
            break;
        }

        if (ch >= '0' && ch <= '9') {
            currentNumber = currentNumber * 10 + (ch - '0');
            isBuildingNumber = true;
        } else {
            if (isBuildingNumber) {
                if (currentNumber < 100) {
                    sum += currentNumber;
                }
                currentNumber = 0;
                isBuildingNumber = false;
            }
        }
    }

    if (isBuildingNumber && currentNumber < 100) {
        sum += currentNumber;
    }

    cout << sum << endl;

    return 0;
}
