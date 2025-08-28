//Да се напише програма во која ќе декларирате и иницијализирате две променливи 
//со наредбата int a = 12, b = 7;. Потоа, отпечатете ги нивниот збир,
//разлика и производ i kolichnik во три последователни линии на екранот.

#include <iostream>
using namespace std;

int main(){
    int a = 12, b = 7;
    int proizvod = a*b;
    int razlika = a-b;
    int zbir = a+b;
    float kolichnik = a/b;


    cout<<"zbir: "<<zbir<<endl;
    cout<<"razlika: "<<razlika<<endl;
    cout<<"kolichnik: "<<kolichnik<<endl;
    cout<<"proizvod: "<<proizvod<<endl;
    return 0;
}