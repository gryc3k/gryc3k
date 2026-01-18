#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int a;
    int wynik = 1;
    int i;
    start: printf("Silnia\n");
    printf("------------------------------------\n");
    do {
    	fflush(stdin);
    	printf("Podaj liczbe a: ");
	} while (scanf("%d", &a) != 1);							// zabezpieczenie przed podaniem znaku lub ujemnej liczby
	
	for (i = 1; i < a + 1; i++) {
			wynik = wynik * i;	
	}
	
	printf("Silnia z liczby %d wynosi: %d", a, wynik);
    return 0;
}
