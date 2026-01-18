#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int liczba1, liczba2, wynik; 				// Zadeklarowane zmienne liczbowe operatorów
	int wybor;		// Zadeklarowane zmienne liczbowe do wyboru polecenia
	start: printf("Prosty kalkulator\n"); 												// Menu powitalne
	printf("-----------------------------------------------------\n\n");
	do {
		printf("Nacisnij 1, 2, 3 lub 4 na klawiaturze by wybrac dzialanie, ktore chcesz wykonac:\n");						// Opcje kalkulatora
		printf(" [1] dodawanie\n [2] dzielenie\n [3] mnozenie\n [4] dzielenie\n");	// Wybór opcji kalkulatora
		scanf("%d", &wybor);
	} while (wybor > 4 || wybor < 0);
	
	
	do {
		printf("Podaj pierwsza liczbe: ");						// Okienko do podania pierwszej liczby
		fflush(stdin);
	} while (scanf("%d", &liczba1) != 1);						// Sprawdzanie czy pierwsza liczba nie jest znakiem typu char
	
	do {
		printf("Podaj druga liczbe: ");						// Okienko do podania drugiej liczby
		fflush(stdin);
	} while (scanf("%d", &liczba2) != 1);					// Sprawdzanie czy druga liczba nie jest znakiem typu char
												
	switch (wybor) {
		case 1:																// Dodawanie
			wynik = liczba1 + liczba2;
			printf("Suma podanych liczb wynosi: %d", wynik);				// Wynik dodawania
			sleep(5);														// 5 sekund pauzy
			fflush(stdin);													// Czyszczenie bufora klawiatury
			system("cls");													// Czyszczenie ekranu
			goto start;														// Powrót do początku programu
			break;
		case 2:																// Odejmowanie
			wynik = liczba1 - liczba2;
			printf("Roznica podanych liczb wynosi: %d", wynik);				// Wynik odejmowania
			sleep(5);														// 5 sekund pauzy
			fflush(stdin);													// Czyszczenie bufora klawiatury
			system("cls");													// Czyszczenie ekranu
			goto start;														// Powrót do początku programu
			break;
		case 3:																	// Mnożenie
			wynik = liczba1 * liczba2;
			printf("Iloczyn podanych liczb wynosi: %d", wynik);				// Wynik mnożenia
			sleep(5);														// 5 sekund pauzy
			fflush(stdin);													// Czyszczenie bufora klawiatury
			system("cls");													// Czyszczenie ekranu
			goto start;														// Powrót do początku programu
			break;
		case 4:																	// Dzielenie		
			if (liczba2 == 0) {														
			printf("Nie wolno dzielic przez zero!");							// Zabezpieczenie przed dzieleniem przez 0
			sleep(5);														// 5 sekund pauzy
			fflush(stdin);													// Czyszczenie bufora klawiatury
			system("cls");													// Czyszczenie ekranu
			goto start;														// Powrót do początku programu						
				} else {
					wynik = liczba1 / liczba2;
				printf("Iloraz podanych liczb wynosi: %d", wynik);				// Wynik dzielenia
			sleep(5);														// 5 sekund pauzy
			fflush(stdin);													// Czyszczenie bufora klawiatury
			system("cls");													// Czyszczenie ekranu
			goto start;														// Powrót do początku programu
				}
			break;
			}
	return 0;
}