#include <stdio.h>
#include <stdlib.h>

double dodawanie(const double *a, const double *b);
double odejmowanie(const double *a, const double *b);
double mnozenie(const double *a, const double *b);
double dzielenie(const double *a, const double *b);

int main() {
    printf("Kalkulator\n");
    printf("----------------------------------------------\n");

    double a, b, wynik;
    double *pa, *pb, *pwynik;
    int wybor;

    pa = &a;
    pb = &b;
    pwynik = &wynik;

    do {
        fflush(stdin);
        printf("Wybierz operacje, ktora chcesz wykonac:\n");
        printf("[1] - dodawanie, [2] - odejmowanie, [3] - mnozenie, [4] - dzielenie: ");
    } while (!scanf("%d", &wybor));

    printf("Podaj a: ");
    while (!scanf("%lf", pa)) {
        fflush(stdin);
        printf("Nieprawidlowa wartosc. Podaj a ponownie: ");
    }

    printf("Podaj b: ");
    while (!scanf("%lf", pb)) {
        fflush(stdin);
        printf("Nieprawidlowa wartosc. Podaj b ponownie: ");
    }

    switch (wybor) {
        case 1:
            *pwynik = dodawanie(pa, pb);
            printf("Wynik dodawania: %lf\n", wynik);
            break;
        case 2:
            *pwynik = odejmowanie(pa, pb);
            printf("Wynik odejmowania: %lf\n", wynik);
            break;
        case 3:
            *pwynik = mnozenie(pa, pb);
            printf("Wynik mnozenia: %lf\n", wynik);
            break;
        case 4:
            *pwynik = dzielenie(pa, pb);
            if (*pb != 0) {
                printf("Wynik dzielenia: %lf\n", wynik);
            } else {
                printf("Nie wolno dzielic przez zero!\n");
            }
            break;
    }

    return 0;
}

double dodawanie(const double *a, const double *b) {
    return *a + *b;
}

double odejmowanie(const double *a, const double *b) {
    return *a - *b;
}

double mnozenie(const double *a, const double *b) {
    return *a * *b;
}

double dzielenie(const double *a, const double *b) {
    if (*b != 0) {
        return *a / *b;
    } else {
        printf("Nie wolno dzielic przez zero!\n");
        return 0;
    }
}