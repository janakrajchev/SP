/*
Од стандарден влез се чита еден природен број n.
Меѓу природните броеви помали од n,
да се најде оној чиј што збир на делителите е најголем.
Во пресметувањето на збирот на делителите на даден број,
да не се зема предвид самиот број.
*/
#include <iostream>
using namespace std;
int main()
{
    int n, suma, max = 1, rez;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        suma = 0;
        for (int j = 1; j < n; j++)
        {
            if (i % j == 0)
            {
                suma += j;
            }

            if (suma > max)
            {
                max = suma;
                rez = i;
            }
        }
    }
    cout << rez;
    return 0;
}