//Од стандарден влез се чита еден природен број n. 
//Меѓу природните броеви помали од n, да се најде оној 
//чиј што збир на делителите е најголем. Во пресметувањето на збирот 
//на делителите на даден број, да не се зема предвид самиот број.

#include <iostream>
using namespace std;

int zbirDeliteli(int num) 
{
    int zbir = 0;

    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            zbir += i;
        }
    }
    return zbir;
}

int main() {
    int n;
    cin >> n;

    if (n <= 1) 
    {
        cout << "Nema broj pomal od " << n << " za presmetka." << endl;
        return 0;
    }

    int maxZbir = 0;
    int maxNum = 0;

    for (int i = 1; i < n; i++) 
    {
        int momentalenZbir = zbirDeliteli(i);
        if (momentalenZbir > maxZbir) 
        {
            maxZbir = momentalenZbir;
            maxNum = i;
        }
    }

    cout << maxNum << endl;
    return 0;
}
