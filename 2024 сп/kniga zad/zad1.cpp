/*возот од Битола за Скопје тргнува во 5 часот и 20 минути, 
во Скопје пристигнува во 8 часот и 12 минути. Да се напише програма со која ќе 
се пресмета колку време патува возот од Битола до Скопје во c++*/
#include <iostream>
using namespace std;
int main()
{
    // 5 20 trgnal
    // 8 12 stasal

    int trgnalMin = 20;
    int trgnalSaat = 5;

    int stasalMin = 12;
    int stasalSaat = 8;

    int convertTrgnalMin = trgnalSaat * 60 + trgnalMin;
    int convertStasalMin = stasalSaat * 60 + stasalMin;

    int vreme = convertStasalMin - convertTrgnalMin;

    cout << vreme / 60 << " casovi i " << vreme % 60 << " minuti" << endl;

    return 0;
}