/*Број на нули (Number of Zeros)

Задача 1 (Task 1)

Да се креираат функции со потпис:

int daliProst(int broj); // оваа функција враќа 1 ако бројот број е прост, а 0 во спротивно
int brojPomaliProst(int broj); // оваа функција е рекурзивна функција која го враќа бројот на простите броеви 
                               //помали од вредноста број. 

Оваа функција ја користи функцијата daliProst
Во main функцијата од стандарден излез се внесува еден цел број a.

На стандарден излез во првиот ред да се отпечати:

Бројот на простите броеви помали од A е X.
X е вредноста која се добива со повик на соодветната функција.*/

//прости броеви се:
//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107...
#include <iostream>  
using namespace std;  

int daliProst(int broj) {  
    if (broj <= 1) return 0; //0 i 1 ne se prosti broevi

    for (int i = 2; i * i <= broj; ++i) {  // i=2 barame od 2 nagore
        if (broj % i == 0)  
            return 0; 
    }  
    return 1; //brojot e prost
}  
 
int brojPomaliProst(int broj) {  
    int brojach = 0;
    for (int i = 2; i < broj; ++i) {  
        if (daliProst(i)) 
        {  
            brojach++;
        }  
    }  
    return brojach;
}  

int main() {  
    int a;  
    cin >> a; 
    int brojProstiBr = brojPomaliProst(a);  
    cout << "Бројот на простите броеви помали од A е " << brojProstiBr << endl;  
    return 0;  
}