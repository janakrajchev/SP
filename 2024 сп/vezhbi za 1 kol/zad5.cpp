#include <iostream>
using namespace std;

int main() {
   int x,y;
   cin>>x>>y;
   if(x<0 && y<0)
    cout<<"Invalid number"<<endl;
   
    int pomalBr, pogolemBr;
    if(x>y){
        pomalBr = y;
        pogolemBr = x;
    }else{
        pomalBr = x;
        pogolemBr = y;
    }
    int tempPogolem = pogolemBr;
    int tempPomal = pomalBr;

    while(tempPomal>0){
        
    }
    return 0;
}
