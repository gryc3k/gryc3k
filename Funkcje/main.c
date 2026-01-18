#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float avg();
int dane[10] = {5, 4, 6, 1, 1, 2, 5, 6, 4, 3};
int ekranPowitalny();
int dodaj(int a, int b);
int sumay(int *c, int *d);
int sumaz();

int main(int argc, char *argv[]) 
{
	ekranPowitalny();
	
	int suma;
	suma = dodaj(5, 6);
	printf("%d", suma);
	printf("\n");
	
	float srednia = avg();
	printf("%f\n", srednia);
	
	sumaz();
	
	return 0;
}

int sumaz(void)
{
	int var1 = 8, var2 = 4;
	
	int sumax; 
	sumax = sumay(&var1, &var2);
	printf("%d", sumax, var1, var2);	
}

int sumay(int *c, int *d)
{
	int add = *c + *d;
	return add;
}

int ekranPowitalny() 
{
	printf("Hello world!\n");
}

int dodaj(int a, int b)
{
	int suma;
	suma = a + b;
	
	return suma;
}

float avg()
{
	int suma = 0;
	for (int i = 0; i < 10; i++) 
	{
		suma += dane[i];
	}
	
	return (suma/10.0);
}