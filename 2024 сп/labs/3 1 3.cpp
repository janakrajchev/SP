#include <iostream>
using namespace std;
//se vnesuvaat 3 broja x, c, p. da se ispechatat 10 broevi pogolemi od x koi shto go sodrzhat brojot c, p pati
int main() {
    int x, c, p;
    cin>>x>>c>>p;

    int brojach = 0;
    int num = x + 1; 

    while (brojach < 10) 
    {
        int temp = num;
        int digitCount = 0;
        while (temp > 0) 
        {
            int poslednaCifra = temp % 10; 
            if (poslednaCifra == c)  digitCount++;
            temp /= 10;
        }
        if (digitCount == p) {
            cout << num << endl;
            brojach++;
        }
        num++;
    }
    return 0;
}
