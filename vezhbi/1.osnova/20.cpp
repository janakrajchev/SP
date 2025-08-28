/*Da se napishe funkcija koja kako vlezni argumenti prima niza od realni broevi i golemina na nizata
Funkcijata e potrebno da ja odredi srednata vrednost od minimalniot i maksimalniot element na nizata
i da ja vrati istata kako izlezen arguemnt.*/
#include<stdio.h>
#define MAX 100
float f(int a[MAX],int n)
    {
      int i;
      int min,max;
      float suma;
      max=min=a[0];
      for(i=0;i<n;i++)
        {
           if(max<a[i])
           max=a[i];
           if(min>a[i])
           min=a[i];
        }
        return ((float)(max+min))/2;
    }
int main()
    {
        int a[MAX],n,i;
        printf("Vnesi n=");
        scanf("%d",&n);
        printf("Vnesi gi clenovite na nizata!\n");
        for(i=0;i<n;i++)
        {
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
        printf("Srednata vrednost od min i max element e %.2f",f(a,n));
        return 0;
    }
