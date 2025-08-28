#include <iostream>
using namespace std;

int najznacajnicifri(int x)
{
    int temp = x;
        int prvacifra, vtoracifra;
        while (temp >= 100) 
        {
            temp /= 10;
        }
        prvacifra = temp / 10;   
        vtoracifra = temp % 10;  

        return prvacifra*10+vtoracifra;
}

int main(){
    int x;
    while (cin >> x)
    {
        cout<<najznacajnicifri(x)<<endl;
    }

    return 0;
}

//mozhen nachin ist tekst

/*#include <iostream>
using namespace std;

int najznachajnaCifra(int x);

int main(){
    int x;
    while(cin>>x){
    cout<<najznachajnaCifra(x)<<endl;}
    return 0;
}

int najznachajnaCifra(int x){
    int temp = x;
    int prvaCifra, vtoraCifra;
    
    while(temp>=100){
        temp/=10;
    }
    prvaCifra = temp/10;
    vtoraCifra = temp%10;
    
    return prvaCifra*10+vtoraCifra;
    
}*/