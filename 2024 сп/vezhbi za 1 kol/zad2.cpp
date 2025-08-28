#include <iostream>
using namespace std;
/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 Обратен број е бројот составен од истите цифри, но во обратен редослед 
(на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9). 
Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/

int svrtenBroj(int x) {
    int svrten = 0;
    while (x > 0) 
    {
        svrten = svrten * 10 + (x % 10);
        x /= 10;
    }
    return svrten;
}

int brojNaCifri(int x) 
{
    int brojach = 0;
    while (x > 0) 
    {
        brojach++;
        x /= 10;
    }
    return brojach;
}

int main() 
{
    int n;
    cin >> n;

    if (n <= 9) 
    {
        cout << "Brojot ne e validen" << endl;
        return 0;
    }

    for (int i = n - 1; i > 9; i--) 
    {
        int reversed = svrtenBroj(i);
        int numDigits = brojNaCifri(i);

        if (reversed % numDigits == 0) 
        {
            cout << i << endl;
            return 0;
        }

    }

    cout << "Nema interesen broj pomal od " << n << endl;
    return 0;
}