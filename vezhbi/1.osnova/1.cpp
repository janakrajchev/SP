#include <iostream>
#include <string>

using namespace std;

// Да се напише програма која ќе ги отпечати Вашето име и презиме, а во
// вториот ред ќе го отпечати бројот на Вашите години
int main() {
    string ime, prezime;
    int godRagjanje;

    // Барање корисникот да ги внесе податоците
    cout << "Внесете го вашето име, презиме и година на раѓање: ";
    cin >> ime >> prezime >> godRagjanje;

    // Пресметување на возраста
    int godini = 2025 - godRagjanje;

    // Печатење на резултатите
    cout << "Вашето име е " << ime << " " << prezime << "." << endl;
    cout << "И вие имате " << godini << " години." << endl;

    return 0;
}