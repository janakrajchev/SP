//

#include <iostream>
using namespace std;
int main()
{ // Skratena forma na operatori
    int cifra = 8;
    cout << "Cifra = " << cifra << endl;
    
    int prvBroj, vtorBroj, tretBroj;
    prvBroj = vtorBroj = 100; // Ova e dozvoleno vo C++
    cout << "Prv broj = " << prvBroj << endl;
    cout << "Vtor broj = " << vtorBroj << endl;
    
    prvBroj += cifra;  // Skratena forma na operatorot +
    
    vtorBroj *= cifra; // Skratena forma na operatorot *
    
    cout << "prvBroj += cofra = " << prvBroj << endl;
    
    cout << "vtorBroj *= cifra = " << vtorBroj << endl;
    
    // Dodeluvanje vrednosti na promenlivi vo izraz
    tretBroj = (prvBroj = 123) + (vtorBroj = 321);
    cout << "Tret broj = " << prvBroj << "+" << vtorBroj << "=" << tretBroj << endl;
    cout << endl;

    return 0;
}
