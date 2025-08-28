/*se vnesuvaat povekje cifreni N celi broevi, da se najdat parnite cifri, da se ispechati kolku se parni i 
da se pomnozhat edna po edna so 2 i da se ispechatat */

NE ISPAGJA TAMAN.


#include <iostream>  
using namespace std;  
brojNaCifri(int N){
    int brojach=0;
    while(N!=0){
        brojach++;
        N/=10;
    }
    return brojach;
}

int main(){
    int N;
    cin>>N;//15628
    int brojach =0;
    while(N>0){
        int cifra = N/brojNaCifri(N);
        if(cifra%2 == 0){
            brojach++;
            cout<<cifra*2;//12416
        }
        N/=10;
    }
    cout<<endl<<"vkupno cifri: "<<brojach<<endl;//3
    
}