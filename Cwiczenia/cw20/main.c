#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n;
	printf("Podaj m: ");
	scanf("%d", &m);
	printf("Podaj n: ");
	scanf("%d", &n);
	
	while (m-2 > n) {
		n += 2;
		printf("%d", n);
		printf(" ");
	}
	return 0;
}