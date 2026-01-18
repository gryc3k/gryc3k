#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	int suma;
	
	printf("Podaj liczbe a: ");
	scanf("%d", &a);
	
	printf("Podaj liczbe b: ");
	scanf("%d", &b);
	
	suma = a + b;
	
	printf("Suma liczb wynosi: %d", suma);
	
	return 0;
}