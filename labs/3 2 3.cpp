//се внесуваат цели позитивни броеви се додека не се внесе нешто друго што не е број
//за секој влез да се испецхати најголемата цифра на бројот а на крај просек од сите најголеми цифри (input: 123 output:3)

#include <iostream>
using namespace std;

int main() {
    int n;
    int sumLargest = 0, brojach = 0;

    while (cin >> n) 
    {
        int najgolembr = 0;
        int temp = n;

        while (temp > 0) {
            int cifra = temp % 10;
            if (cifra > najgolembr) {
                najgolembr = cifra;
            }
            temp /= 10;
        }

        cout << najgolembr << endl;
        sumLargest += najgolembr;
        brojach++;
    }

if (brojach > 0) {
    cout << (sumLargest * 1.0 / brojach) << endl;
}


    return 0;
}
