#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n;
	printf("Podaj m: ");
	scanf("%d", &n);
	printf("Podaj n: ");
	scanf("%d", &m);
	
	while (m > n) {
		n += m;
		printf("%d", n);
		printf(" ");
	}
	return 0;
}