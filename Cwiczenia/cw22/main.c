#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m, n, k;
	
	do {
		fflush(stdin);
		printf("Podaj n: ");
	} while (!scanf("%d", &n));
	
	do {
		fflush(stdin);
		printf("Podaj m: ");
	} while (!scanf("%d", &m));
	
	do {
		fflush(stdin);
		printf("Podaj k: ");
	} while (!scanf("%d", &k));		
	
	if (n > m) {
		while (n > m){
			n += m;
			printf("%d", n);
			printf(" \n");
		}
	} 
	printf("\n");
	if (n < k) {
		while (n < k) {	
			k += n;
			printf("%d", n);
			printf(" ");
		}

	}

	return 0;
}