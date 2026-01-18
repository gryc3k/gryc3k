#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a=6854, b=7835, c=5635;

int *wsk1 = &a;
int *wsk2 = &b;
int *wsk3 = &c;

int main(int argc, char *argv[]) {	
	printf("%d\n", (int*)sizeof(wsk1));
}