#include <iostream>
using namespace std;

int rek (int n)
{
    if (n%2 ==0)
    {
        if (n<10) return 1;
        return 1+ rek(n/10);
    }
    else
    {
        if (n<10) return 0;
        return 0+ rek(n/10);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<rek(n)<<endl;
    return 0;

}