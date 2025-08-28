/*
Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
 Од тастатура се внесува природен број n ( n > 9).
 Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*/
#include <iostream>
using namespace std;
int main() {
   int broj;

    cin>>broj;
    int obratenbr;

    if(broj>=10) {
        for(int i= broj-1 ; i>0; i--) {
            int temp = i;
            int lastdigit;
            int brCifri = 0;
            obratenbr = 0;
            while(temp>0) {
                lastdigit = temp%10;
                obratenbr =(obratenbr*10)+lastdigit;
                temp=temp/10;
                brCifri++;
            }

            if(obratenbr%brCifri==0) {
                cout<<i<<endl;
                break;

            }

        }
    }
    else {
        cout<<"Brojot ne e validen"<<endl;
    }
    return 0;
}