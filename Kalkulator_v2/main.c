#include <stdio.h>
#include <stdlib.h>

double dodaj(double *a, double *b);
double odejmij(double *a, double *b);
double mnoz(double *a, double *b);
int dziel(double *a, double *b, double *wynik);
int wDanych(double *pliczba);

int main(int argc, char *argv[]) {
	double a, b, wynik;
	double *pa, *pb, *pwynik;
	pwynik = &wynik;
	int wybor, odp;
	start: printf("Prosty kalkulator\n");
	printf("-----------------------------------------------------\n\n");
	do {
		do {
			printf("Nacisnij 1, 2, 3 lub 4 na klawiaturze by wybrac dzialanie, ktore chcesz wykonac:\n");
			printf(" [1] dodawanie\n [2] odejmowanie\n [3] mnozenie\n [4] dzielenie\n");
			scanf("%d", &wybor);
		} while (wybor > 4 || wybor < 0);
		
		printf("Wprowadz pierwsza liczbe: ");
		wDanych(pa = pa);
		
		printf("Wprowadz druga liczbe: ");
		wDanych(pb = &b);
													
		switch (wybor) {
			case 1:															
				printf("Suma podanych liczb wynosi: %.2lf", dodaj(pa, pb));												
				break;
			case 2:																
				printf("Roznica podanych liczb wynosi: %.2lf", odejmij(pa, pb));				
				break;
			case 3:																	
				printf("Iloczyn podanych liczb wynosi: %.2lf", mnoz(pa, pb));	
				break;
			case 4:																														
				if(dziel(pa, pb, pwynik)){
					printf("Wynik dzielenia: %.2lf", wynik);
					break;
				}
				else{
					printf("Nie mozna dzielic przez 0!\n");
					break;
				}
		}
		
		printf("\nCzy chcesz powtorzyc obliczenia?(1 - tak, 0 - nie): ");
		while(!scanf("%d", &odp) && odp!=1 && odp!=0){
            printf("Bledne dane\nWprowadz ponownie dane: ");
            fflush(stdin);
        }
        system("cls");
	} while (odp == 1);
			
	return 0;
}
int wDanych(double *pliczba){
    fflush(stdin);
    return scanf("%lf", pliczba);
}
double dodaj(double *a, double *b) {
	return *a + *b;
}
double odejmij(double *a, double *b) {
	return *a - *b;
}
double mnoz(double *a, double *b) {
	return *a * *b;
}
int dziel(double *a, double *b, double *wynik) {
	if (*b == 0) {
		return 0;
	} else {
		*wynik = *a / *b;
		return 1;
	}
}