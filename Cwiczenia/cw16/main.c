#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Podaj liczbe a: ");
	scanf("%d", &a);
	printf("\nPodaj liczbe b: ");
	scanf("%d", &b);
	int absa = abs(a);
	int absb = abs(b);
	
	if(absa > absb) {
		printf("%d", absa);
	} else {
		printf("%d", absb);
	}
	
	return 0;
}