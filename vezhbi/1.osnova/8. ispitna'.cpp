/* da se vnesat N prirodni broevi, da se ispechatat site koi se pomali od 5 i da se ispechati brojot na elementi pomali od 5
so pomosh na rekurzija*/

#include <iostream>  
using namespace std;  
int pomali(int *a,int N ){
    int brojach=0;
    for(int i =0; i<N;i++){
        if(a[i]<5){
            cout<<a[i]<<" ";
            brojach++;
            
        }
    }
    cout<<"vkupno: ";
    return brojach;
}
int main() {  
    float N;
    cin>>N;
    int a[100];
    for(int i = 0;i<N;i++){
        cin>>a[i];
    }
    cout<< pomali(a, N);
    
    return 0;  
}