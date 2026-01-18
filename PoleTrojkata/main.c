#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, h, p, wynik;
	int opcje;
	printf("Program do oblicznia pola trojkata\n");
	start: printf("-----------------------------------\n");
	fflush(stdin);
	do {
		printf("Aby wybrac sposob obliczenia pola trojkata wybierz jedna z ponizszych opcji:\n");
		printf("[1] - Pole trojkata z podstawa i wysokoscia\n");
		printf("[2] - Pole trojkata z wszystkimi 3 bokami\n");
		scanf("%d", &opcje);
	} while (opcje > 2 || opcje < 0);
	
	switch (opcje) {
		case 1:
			do {
				printf("Podaj bok a: ");
				fflush(stdin);
			} while(scanf("%lf", &a) != 1);
			do {
				printf("Podaj bok h: ");
				fflush(stdin);
			} while(scanf("%lf", &h) != 1);
			wynik = (a*h)/2;
			printf("Pole trojkata wynosi: %lf", wynik);
			fflush(stdin);
			sleep(5);
			system("cls");
			goto start;
			break;
		case 2:
			do {
				printf("Podaj bok a: ");
				fflush(stdin);
			} while(scanf("%lf", &a) != 1);
	
			do {
				printf("Podaj bok b: ");
				fflush(stdin);
			} while(scanf("%lf", &b) != 1);
	
			do {
				printf("Podaj bok c: ");
				fflush(stdin);
			} while(scanf("%lf", &c) != 1);
			p = (a + b + c) / 2;
			wynik = sqrt(p*(p-a)*(p-b)*(p-c))/2;
			printf("Pole trojkata wynosi: %lf", wynik);
			fflush(stdin);
			sleep(5);
			system("cls");
			goto start;
			break;
	}
	return 0;
}