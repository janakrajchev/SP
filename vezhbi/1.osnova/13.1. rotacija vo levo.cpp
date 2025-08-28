/*Da se napishe programa koja za daden cel broj vnesen od tastetura kje izvrshi rotacija za edno mesto nalevo.
Brojot dobien po rotacija da se ispe4ati na ekran
pr: za brojot 2514 , kje go ispe4ati brojot 4251
              98567                         85679*/
#include <iostream>
using namespace std;

void rotacijaLevo(int *niza, int n) {
    int temp = niza[0];
    for(int i = 0; i<n-1;i++){
        niza[i]=niza[i+1]; //na poslednata pozicija neka dojde taa pred nea
    }
    niza[n-1]=temp; //prviot element kje bide posledniot koj sme go zachuvale
}

int main() {
    int niza[100], n;
    
    cout<<"Внесете број на елементи на низата ";
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>niza[i];
    }
    rotacijaLevo(niza, n);

    cout << "Цифрите на бројот се: ";
    for (int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    cout << endl;

    return 0;
}