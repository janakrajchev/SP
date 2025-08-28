#include <iostream>
using namespace std;
//se vnesuva binaren broj se dodeka ne se vnese neshto porazlichno
//da se najde dekadniot broj na vneseniot binaren broj i da se ispechati(101 : 5)
int main() 
{
    int binarenBr;
    cin >> binarenBr;
    int base10 = 0, base2 = 1, poslednaCifra;
    int temp = binarenBr;
    while (temp > 0)
    {
        poslednaCifra = temp % 10;
        base10 += poslednaCifra * base2;
        base2 *= 2;
        temp /= 10;
    }
    cout << base10 << endl;
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     int n;
//     while(cin>>n){
//         int broj = 0;
//         int eksponent = 0;
//         while(n>0){
//             broj += (n%10)*pow(2,eksponent);
//             n /= 10;
//             eksponent++;
//         }
//         cout<<broj;
//     }
// }
