/*Od tastetura se vnesuvaat nepoznat broj na celi broei. Na ekran da se otpechatat site broevi kaj koi
vtorata cifra gledano odlevo nadesno e parna.
pr
94325 se pe4ati na ekran
314568 ne se pe4ati na ekran */
#include<stdio.h>
#define MAX 100
int main()
    {
        int a[MAX],i=0,n,c,k,br=0;
        printf("Vnesuvaj broevi! \n");
        while(scanf("%d",&n))
            {
                k=n;
                if(n<10)
                continue;
                while(k>10)
                    {
                        k/=10;
                        if(k>10 && k<100)
                        break;
                    }
               // printf("Pe4ati k po ciklus %d\n",k);
                c=k%10;
                if((c%2)==0)
                {
                    a[i]=n;
                    br++;
                    i++;
                }
                if((c%2))
                continue;
            }
        for(i=0;i<br;i++)
        printf("%d\t",a[i]);
        return 0;
    }

