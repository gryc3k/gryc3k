#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a, b, x;															    // deklaracja zmiennych liczbowych
	
	
	start: printf("Funkcja liniowa\n");											// ekran powitalny
	printf("---------------------------------------------\n\n");
	
									
	do {
		printf("Podaj liczbe a: ");	
		fflush(stdin);
	} while (scanf("%lf", &a) != 1);											//sprawdzanie poprawnosci wpisanych danych do liczby a
	
	do {
		printf("Podaj liczbe b: ");
		fflush(stdin);
	} while (scanf("%lf", &b) != 1);										//sprawdzanie poprawnosci wpisanych danych do liczby b
																			
	if (a == 0 && b == 0) { 
		printf("Rownanie tozsamosciowe - nieskonczenie wiele rozwiazan.");			   		// wynik z nieskonczeniem wiele rozwiazan
		sleep(5);
  		fflush(stdin);
  		system("cls");
  		goto start;			
	} else if (a == 0 && b != 0) {				
		printf("Rownanie nieoznaczone - brak rozwiazan");		      		// wynik  bez rozwiazan
		sleep(5);
  		fflush(stdin);
  		system("cls");
  		goto start;				
	} else {
		printf("Rownanie oznaczone - jedno rozwiazanie\n");					// wynik z jednym rozwiazaniem
		x = -b/a; 						
		printf("Rozwiazanie x = %lf", x);
		sleep(5);
  		fflush(stdin);
  		system("cls");
  		goto start;				
	return 0;
	}
}