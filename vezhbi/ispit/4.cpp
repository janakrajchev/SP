//od tastatura se vnesuvaat  N pozitivni celi broevi (N<= 100) 
//a potoa se vnesuva i cel broj ind(ind>=0)
//da se napishe funkcija sum_pos koja ja prima nizata, ind (koj pretstavuva
//indeks vo nizata) i brojor na validni elementi vo nizata
//funkcijata treba da vrati sumata na site elementi pochnuvajkji od dadeniot indeks 
//ind pa se do krajot na nizata. Ako indeksot ind e pogolem od N
// funkcijata treba da vrati 0

//DA SE RESHI SO POKAZHUVAHCI 
// INPUT 10 2 4 6 8 12 33 44 6
// OUTPUT 98

//98 = 9+12+33+44

#include <iostream>
using namespace std;
int sum_pos(int *niza, int N, int ind){
    int sum = 0;
    for(int i =0; i <N; i++){
        if(ind>=i){
            sum+=*(niza+i);
        }
    }
    return sum;
}
int main(){
    int N, ind;
    cin>>N;
    int *niza = new int[N];
    for(int i=0; i<N; i++){
        cin>>*(niza+i);
    }
    if(ind > N) return 0;
    cin>>ind;
    cout<<sum_pos(niza, N, ind)<<endl;
}
