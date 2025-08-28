#include <iostream>
using namespace std;
//dali brojot e prost, ako e prost se bara naredniot pogolem prost broj od nego i se vrakja razlikata
int prost(int n) {
    for(int i = 2; i*i< n; ++i){
        if (n % i == 0) return 0;
        i++; //odi so +1 dodeka ne se dobie drug prost broj vo prostgore()!
    }
    return 1;
}

int prostgore(int n) {
    do {
        n++;
    } while (!prost(n));
    return n;
}

int main() {
    int broj, razlika;
    cout << "Vnesi broj";
    cin >> broj;
    razlika = prostgore(broj) - broj;
    cout << "Razlikata pomegju prostiot broj " << prostgore(broj) << " i brojot " << broj << " e " << razlika << endl;
    return 0;
}
