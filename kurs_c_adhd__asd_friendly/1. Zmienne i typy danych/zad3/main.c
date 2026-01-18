#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const double a;
	
	printf("Podaj liczbe: ");
	scanf("%lf", &a);
	printf("Podana liczba z 2 miejscami po przecinku: %.2lf\n", a);
	return 0;
}