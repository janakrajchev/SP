/*DA se napishe programa koja dadena matrica  kje ja izmeni na toj na4in shto elementite od gornata
polovina na matricata kje si gi smenat mestata so elementite od dolanata polovina*/
#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int a[MAX][MAX], i, j, n, m, temp;
    cout << "Vnesete ja dimenzijata na matricata!" << endl;
    cout << "Vnesi broj na redici n=";
    cin >> n;
    cout << "Vnesi broj na koloni m=";
    cin >> m;
    cout << "A sega vnesi gi elementite na matricata!" << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    for (i = 0; i < n / 2; i++)
        for (j = 0; j < m; j++) {
            temp = a[i][j];
            a[i][j] = a[i + (n + 1) / 2][j];
            a[i + (n + 1) / 2][j] = temp; // NE SMEESH DA ZABORAVISH "I" U ZAGRADITE!!!!
        }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
