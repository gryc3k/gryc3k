#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	system("cls");
	if (a > b) {
		printf("%d", a);
	}
	
	if (a < b) {
		printf("%d", b);
	}
	
	if (a == b) {
		printf("%d", a);
		printf("%d", b);
	}
	return 0;
}