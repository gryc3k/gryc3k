#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Witaj w programie obliczajacym sume!\n");
	int liczba1, liczba2;
	int suma = 0;
	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &liczba1);
	printf("Podaj druga liczbe: ");
	scanf("%d", &liczba2);
	suma = liczba1 + liczba2;
	printf("Twoja suma: %d + %d = %d", liczba1, liczba2, suma);
	return 1;
}

