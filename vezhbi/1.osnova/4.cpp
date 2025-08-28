//Да се напише програма со која ќе се отпечати 
//средната цифра на трицифрениот број brojX = 274. 

#include <iostream>
using namespace std;

int main(){
    int x=274;
    float srednaVrednost;

    int prvaCifra = x/100;
    cout<<prvaCifra<<endl;
    int vtoraCifra = (x/10)%10;
    cout<<vtoraCifra<<endl;
    int tretaCifra = x%10;
    cout<<tretaCifra<<endl;

    int zbir = prvaCifra+vtoraCifra+tretaCifra;
    srednaVrednost = (float)zbir/3;
    cout<<srednaVrednost<<endl;

    return 0;
}