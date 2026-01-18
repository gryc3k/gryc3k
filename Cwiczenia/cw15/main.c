#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("Podaj a: \n");
	scanf("%d", &a);
	printf("Podaj b: \n");
	scanf("%d", &b);
	printf("Podaj c: \n");
	scanf("%d", &c);
	
	if (a > b && a > c) {
		printf("Najwieksze liczba to: \n");
		printf("a = %d\n", a);
	} 
	
	if (b > a && b > c){
		printf("Najwieksze liczba to: \n");
		printf("b = %d\n", b); 
	} 
	
	if (c > a && b > a){
		printf("Najwieksze liczba to: \n");
		printf("c = %d\n", c);
	}
	
	if (a == b) {
		printf("Najwieksze liczby to: \n");
		printf("a = %d\n", a);
		printf("b = %d\n", b);
	} 
	
	if (b == c) {
		printf("Najwieksze liczby to: \n");
		printf("b = %d\n", b);
		printf("c = %d\n", c);
	} 
	
	if (a == c){
		printf("Najwieksze liczby to: ");
		printf("a = %d\n", a);
		printf("c = %d\n", c);
	}
	return 0;
}