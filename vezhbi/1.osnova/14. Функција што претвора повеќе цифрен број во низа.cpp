#include <iostream>
using namespace std;

// Функција што претвора повеќе цифрен број во низа
void brojVoNiza(int broj, int *niza, int n) {
    for (int i = n-1; i >= 0; i--) {
        niza[i] = broj % 10; 
        broj /= 10;
    }
}

int main() {
    int broj;
    int niza[100], n;
    
    cout << "Внесете повеќе цифрен број: ";
    cin >> broj;
    
    cout<<"Внесете број на елементи на низата(број = низа) ";
    cin>>n;
    

    brojVoNiza(broj, niza, n);

    cout << "Цифрите на бројот се: ";
    for (int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    cout << endl;

    return 0;
}
