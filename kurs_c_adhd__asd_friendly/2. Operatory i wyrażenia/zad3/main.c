#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int a, b;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    printf("Reszta z dzielenia: %d\n", a % b);

    return 0;
}
