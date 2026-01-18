#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *Wyswietlnapis() {
    int maxDlugosc;
    do {
        fflush(stdin);
        printf("Wprowadz maksymalna dlugosc napisu: \n");
    } while (!scanf("%d", &maxDlugosc));

    char *napisAlloc = (char *)malloc((maxDlugosc + 1) * sizeof(char));
    printf("Wprowadź napis: \n");
    fflush(stdin);
    fgets(napisAlloc, maxDlugosc + 1, stdin);
    return napisAlloc;
}

void printNapis(const char *napis) {
    printf("Napis: %s \n", napis);
}

int samogloski(const char *napis) {
    int ileSamoglosek = 0;
    for (int i = 0; napis[i] != '\0'; i++) {
        char znak = tolower(napis[i]);
        if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u' || znak == 'y') {
            ileSamoglosek++;
        }
    }
    return ileSamoglosek;
}

void duzeLitery(char *napis) {
    for (int i = 0; napis[i] != '\0'; i++) {
        napis[i] = toupper(napis[i]);
    }
}

void liczPrzecinki(const char *napis) {
    int ilePrzecinkow = 0;
    printf("Napis zawiera przecinki w lokalizacjach: ");
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] == ',') {
            ilePrzecinkow++;
            printf("%d ", i + 1);
        }
    }
    printf("\nIlosc przecinkow wynosi %d", ilePrzecinkow);
}

int main() {
    char *napisDyn = Wyswietlnapis();
    printNapis(napisDyn);

    int liczbaSamoglosek = samogloski(napisDyn);
    printf("Liczba samoglosek wynosi %d\n", liczbaSamoglosek);

    duzeLitery(napisDyn);
    printf("%s\n", napisDyn);

    liczPrzecinki(napisDyn);

    free(napisDyn);

    return 0;
}