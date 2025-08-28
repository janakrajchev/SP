#include <iostream>
using namespace std;

/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.*/
int main()
{
    int m, n, a;
    cin >> m >> n;
    for (int broj = 0; m <= n; m++)
    {
        broj = m;
        a = broj;
        while (broj != 0)
        {
            if ((broj % 10) % 2 == 0)
                broj = broj / 10;
            else
            {
                break;
            }
        }
        if (broj == 0)
        {
            cout << a << endl;
            break;
        }
    }
    if (m > n)
    {
        cout << "NE" << endl;
    }
    return 0;
}