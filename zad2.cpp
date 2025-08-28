# include <iostream>
using namespace std;


int main()
{
    int x, brojach = 0;
    cin>>x;
    for(int i = 2; i<=x/2; i++)
    {
        if(x%i == 0)
        {
            brojach++;
        }
        
        if (brojach ==0)
        {
            cout<<x<<" e prost broj";
        }
        
        else
        {
            cout<<x<<" ne e prost broj";
        }
    }
}