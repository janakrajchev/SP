#include <iostream>
using namespace std;

int BrojPozitivni(int *niza, int n)
{

    if (n == 0)
        return 0;
    else
    {
        int br = 0;
        if (br >= 1)
            return 1 + BrojPozitivni(niza, n - 1);
        else
            return BrojPozitivni(niza, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    int *niza = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> niza[i];
    }

    cout << BrojPozitivni(niza, n);
}