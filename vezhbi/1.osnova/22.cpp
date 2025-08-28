#include <stdio.h>
void prevrti(int* a, int n, int i)
{
    if(n > 2*i)
    {
        int pom = a[i];
        a[i] = a[n-i-1];
        a[n-i-1]=pom;
        prevrti(a, n, i+1);
    }
}

int main()
{
    int niza[100], n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &niza[i]);
    }
    for(i = 0; i < n - 1; i++)
        printf("%d ", niza[i]);
    printf("%d\n", niza[i]);
    prevrti(niza, n, 0);
    for(i = 0; i < n - 1; i++)
        printf("%d ", niza[i]);
    printf("%d", niza[i]);
    return 0;
}