#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a;
	double b;
	
	printf("Podaj liczbe a: ");
	scanf("%lf", &a);
	printf("Podaj liczbe b: ");
	scanf("%lf", &b);
	
	double suma = a+b;
	double roznica = a-b;
	double iloczyn = a*b;
	double iloraz = a/b;
	
	printf("Suma: %lf\n", suma);
	printf("Roznica: %lf\n", roznica);
	printf("Iloczyn: %lf\n", iloczyn);
	printf("Iloraz: %lf\n", iloraz);
	return 0;
}