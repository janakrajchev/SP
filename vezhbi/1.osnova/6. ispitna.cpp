/*Погоден број Задача 2
Од стандарден влез се вчитува матрица со димензии МхN.
Треба да се напише програма која ќе го најде и отпечати најголемиот погоден број.
Ако нема таков број да се отпечати: Nema pogoden broj.
За еден број од матрицата велиме дека е погоден број ако
тој е делив и со редниот број на редот и на колоната во која се наоѓа.
Притоа да се земе предвид дека редиците и колоните
почнуваат од реден број 1.
Пример:
$\begin{pmatrix}
4 & 18 & 7 & 11 \\
3 & 8 & 16 & 1 \\
17 & 12 & 9 & 5 \\
6 & 14 & 24 & 17
\end{pmatrix}$
→$max(4, 18, 8, 12, 9, 24) = 24$
Во примерот елементите во зелено се елементи кои се деливи со редниот број
на редот и на колоната во која се наоѓаат.
На пример 24 се наоѓа во третата колона и четвртата редица и за него важи дека 4|24 и 3|24.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n, m, i, j;
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    bool imaPogoden = false;
    int max = -1;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int broj = a[i][j];
            int red = i + 1;
            int kol = j + 1;

            if (broj % red == 0 && broj % kol == 0)
            {
                if (imaPogoden)
                {
                    cout << " ";
                }
                cout << broj;
                imaPogoden = true;
                if (broj > max)
                {
                    max = broj;
                }
            }
        }
    }
    cout << endl;
    if (!imaPogoden)
    {
        cout << "Nema pogoden broj.";
    }
    else
    {
        cout << "max = " << max << endl;
    }

    cout << endl;
    return 0;
}