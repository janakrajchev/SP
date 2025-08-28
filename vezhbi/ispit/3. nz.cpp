/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//. Да се напише рекурзија која како аргумент ќе добие низа од цели броеви и како резултат
//ќе провери дали збирот на елементите од низата после i-тиот елемент е еднаков на i-тиот
//елемент. Ако сите елементи го исполнуваат условот , функцијата враќа 1, во спротивнo враќа
//0.
#include <iostream>
using namespace std;
int sum(int *a, int n){
    if(n == 0) return 0;
    else return a[n-1] + sum(a, n-1);
}
int ednakvi(int *a, int n){
     int i, zbir=0;
 if(n==0)
 return 1;
 if(n==1)
 zbir=a[0];
 if(n>1)
 for(i=1;i<n;i++){
 zbir+=a[i];
 }
 if(a[0]!=zbir) return 0;
 else {
     return ednakvi(a+1,n-1);
 }
}
int main()
{
    int niza[100];
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        cin>>niza[i];
    }
    int k = ednakvi(niza,n);
    if(k == 0) cout<<"da"<<endl;
    else cout<<"ne"<<endl;
    
    return 0;
}

/*гпт вика вака

//. Да се напише рекурзија која како аргумент ќе добие низа од цели броеви и како резултат
//ќе провери дали збирот на елементите од низата после i-тиот елемент е еднаков на i-тиот
//елемент. Ако сите елементи го исполнуваат условот , функцијата враќа 1, во спротивнo враќа
//0.
#include <iostream>
using namespace std;

int sum(int *a, int start, int n) {
    if (start == n) return 0;
    return a[start] + sum(a, start + 1, n);
}

int ednakvi(int *a, int n, int index = 0) {
    if (index == n - 1) return 1;
    if (a[index] != sum(a, index + 1, n)) return 0;
    return ednakvi(a, n, index + 1);
}

int main() {
    int niza[100], n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }
    
    if (ednakvi(niza, n)) cout << "da" << endl;
    else cout << "ne" << endl;
    
    return 0;
}
*/