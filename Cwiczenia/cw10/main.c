#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x, absolute;
	scanf("%lf", &x);
	absolute = abs(x);
	printf("%lf", absolute);
	return 0;
}