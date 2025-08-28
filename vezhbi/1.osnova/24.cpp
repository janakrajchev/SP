/*Da se napishe programa koja za dadena datoteka kje gi izbroi redovite koi sodrzat najmalku tri zbora.
Ovoj broj da se otpechati vo druga datoteka.Imeto na vleznata i izleznata datoteka se zadavaat od kom-
adna linija, a dokolku ne se zadadeni da se ispechati nachin na upotreba na programata. Zborovite so-
drzat bukvi cifri a oddeleni se so blanko ili cpecijalni znaci.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 50
int main()
    {
        FILE *vlez,*izlez;
        char red[MAX];
        int br=0,vozbor=0,i,k=0;
        if((vlez=fopen("dat.txt","r"))==NULL)
            {
                printf("Datotekata nemoze da se otvori za 4itanje ! \n");
                return -1;
            }
        if((izlez=fopen("dat1.txt","w"))==NULL)
            {
                printf("Datotekata nemoze da se otvori za zapishuvanje ! \n");
                return -1;
            }
        while(fgets(red,MAX,vlez)!=NULL)
            {
                for(i=0;*(red+i)!='\0';i++)
                    {
                        if(isalpha(*(red+i)))
                            {
                                vozbor=1;
                                i++;
                            }
                        else
                            {
                                if(vozbor)
                                    {
                                        vozbor=1;
                                        br++;
                                    }
                                i++;
                            }
                    }
            if(vozbor)
            br++;
            if(br>3)
            k++;
            br=0;
            }
            fprintf(izlez,"%d",k);
            fclose(vlez);
            fclose(izlez);
            return 0;
    }
