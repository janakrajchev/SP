/*Da se napishe programa koja za daden cel broj vnesen od tastetura kje izvrshi rotacija za edno mesto nadesno.
Brojot dobien po rotacija da se ispe4ati na ekran
pr: za brojot 2514 , kje go ispe4ati brojot 4251
              98567                         79856*/
#include <iostream>
using namespace std;

void rotacijaDesno(int *niza, int n) {
    int temp = niza[n-1];
    for(int i = n-1; i>=0;i--){
        niza[i]=niza[i-1]; //na poslednata pozicija neka dojde taa pred nea
    }
    niza[0]=temp; //prviot element kje bide posledniot koj sme go zachuvale
}

int main() {
    int niza[100], n;
    cin>>n;

    for(int i =0; i<n; i++){
        cin>>niza[i];
    }

    rotacijaDesno(niza, n);

    for (int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    cout << endl;

    return 0;
}