/*Da se napishe funkcija koja kako parametar prima niza od n realni broevi, a vraka

k=koren((suma(od i=1 do i=n)od(xi-sredna vrednost )^2)/n) */
#include <stdio.h>
#include <stdbool.h>

bool prost(int broj, int n) {
    if (n == 1) return true;
    else {
        if (broj % n != 0) return prost(broj, n - 1);
        else return false;
    }
}

int prevrti(int n) {
    int suma = 0;
    while (n > 0) {
        suma = suma * 10 + n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int a, b;
    printf("Vnesi go ospegot!\n");
    printf("Vnesi pocetok=");
    scanf("%d", &a);
    printf("Vnesi kraj=");
    scanf("%d", &b);

    for (int n = a; n <= b; n++) {
        if (prost(n, n - 1) && (n == prevrti(n)))
            printf("%d\t", n);
    }
    printf("\n");

    return 0;
}