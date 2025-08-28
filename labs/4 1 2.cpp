#include <iostream>
using namespace std;

void prvideset(int n, int m, int p)
{
    int brojach = 0;
    while (brojach < 10) 
    {
        int temp = n;
        int brojacP = 0; 

        while (temp > 0)
        {
            int poslednaCifra = temp % 10;
            if (poslednaCifra == m)
                brojacP++;

            temp /= 10;
        }

        if (brojacP == p)
        {
            cout << n << endl;
            brojach++; 
        }
        n++;
    }
}
int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    prvideset(n , m ,p);
    return 0;
}