#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double prompt(double *data){
	printf("Podaj liczbe: ");
	scanf("%lf", data);
}

double objetosc(const double *boka, const double *bokb, const double *bokc);
double polePowierzchni(const double *bokx, const double *boky, const double *bokz);

int main(int argc, char *argv[]) {
	double a, b, c, wynik;
	double *wa, *wb, *wc, *wwynik;
	char odp;
	int menu;
	wwynik = &wynik;
	
	start: printf("Kalkulator pola powierzchni calkowitej i objetosci prostopadloscianu\n");
	printf("------------------------------------------------------------\n\n");
	do {
		do {
			printf("Co chcesz obliczyc?\n [1] - Pole powierzchni calkowitej prostopadloscianu\n [2] - Objetosc prostopadloscianu\n");
			scanf("%d", &menu);
		} while (menu > 2 || menu < 0);
			
		prompt(wa = &a);
		
		prompt(wb = &b);
		
		prompt(wc = &c);
			
			switch (menu) {
				case 1: {
					printf("Pole powierzchni calkowitej prostopadloscianu wynosi: %.2lf", polePowierzchni(wa, wb, wc));		
					break;
				}
				case 2: {
					printf("Objetosc prostopadloscianu wynosi: %.2lf", objetosc(wa, wb, wc));		
					break;
				}
			}
		printf("\nCzy chcesz powtorzyc obliczenia? (1 - tak, 0 - nie): ");
		while(!scanf("%d", &odp) && odp!=1 && odp!=0){
            printf("Bledne dane\nWprowadz ponownie dane: ");
            fflush(stdin);
        }
        system("cls");
	} while (odp == 1);
	
	return 0;
}

double objetosc(const double *boka, const double *bokb, const double *bokc) {
	do {
		return *boka * *bokb * *bokc;
	} while (*boka > 0 || *bokb > 0 || *bokc > 0);	
}

double polePowierzchni(const double *bokx, const double *boky, const double *bokz) {
	if (*bokx <= 0 || *boky <= 0 || *bokx <= 0) {
		return 0;
	} else {
		return (2 * *bokx * *boky) + (2 * *bokx * *bokz) + (2 * *bokz * *boky);
	}
}