#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Samochod {
    char marka[15];
    char model[30];
    int rocznik;
    char silnik[30];
    int mocSilnika;
    int pojemnoscSkokowaSilnika;
    char skrzyniaBiegowRodzaj[20];
    int skrzyniaBiegowIloscBiegow;
    char rodzajPaliwa[20];
};

struct Samochod dodaj();
void wyswietl(struct Samochod samochody[], int ilosc);

int main() {
    int iloscSamochodow;

    	do {
    		fflush(stdin);
        	printf("Podaj ilosc samochodow (maksymalnie 15): ");
    	} while ((!scanf("%d", &iloscSamochodow) || (iloscSamochodow <= 0) || (iloscSamochodow > 15)));

    struct Samochod *samochody = malloc(iloscSamochodow * sizeof(struct Samochod)); //rezerwacja pamieci na dane o samochodach;

    for (int i = 0; i < iloscSamochodow; i++) {
        samochody[i] = dodaj();
    }

    wyswietl(samochody, iloscSamochodow); //funkcja realizujaca wyswietlanie informacji o samochodach;'

    free(samochody); //zwalnianie pamieci;

    return 0; //zakonczenie programu;
}

struct Samochod dodaj() {
    struct Samochod auto1;

    do {
    	fflush(stdin);
        printf("Podaj marke samochodu: ");
        fgets(auto1.marka, sizeof(auto1.marka), stdin);
    } while (auto1.marka[0] == '\n');  // Sprawdzenie, czy użytkownik wprowadził coś innego niż pusty wiersz

    do {
    	fflush(stdin);
        printf("Podaj model samochodu: ");
        fgets(auto1.model, sizeof(auto1.model), stdin);
    } while (auto1.model[0] == '\n');  // Sprawdzenie, czy użytkownik wprowadził coś innego niż pusty wiersz

    do {
    	fflush(stdin);
        printf("Podaj rocznik samochodu: ");
        while (scanf("%d", &auto1.rocznik) != 1) {
            printf("Nieprawidlowy rocznik. Podaj rocznik jeszcze raz: ");
            while (getchar() != '\n');  // Opróżnienie bufora
        }
    } while (auto1.rocznik < 1900 || auto1.rocznik > 2024);

    do {
    	fflush(stdin);
        printf("Podaj silnik samochodu (np. 3.0 V6 lub 1.9 TDI): ");
        fgets(auto1.silnik, sizeof(auto1.silnik), stdin);
    } while (auto1.silnik[0] == '\n');  // Sprawdzenie, czy użytkownik wprowadził coś innego niż pusty wiersz

    do {
    	fflush(stdin);
        printf("Podaj moc silnika samochodu [KM]: ");
        while (scanf("%d", &auto1.mocSilnika) != 1 || auto1.mocSilnika <= 0) {
            printf("Nieprawidlowa moc silnika. Podaj moc silnika jeszcze raz: ");
            while (getchar() != '\n');  // Opróżnienie bufora
        }
    } while (auto1.mocSilnika <= 0);

    do {
    	fflush(stdin);
        printf("Podaj pojemnosc skokowa silnika samochodu [cm^3]: ");
        while (scanf("%d", &auto1.pojemnoscSkokowaSilnika) != 1 || auto1.pojemnoscSkokowaSilnika <= 0) {
            printf("Nieprawidlowa pojemnosc skokowa silnika. Podaj jeszcze raz: ");
            while (getchar() != '\n');  // Opróżnienie bufora
        }
    } while (auto1.pojemnoscSkokowaSilnika <= 0);

	do {
    	fflush(stdin);
        printf("Podaj typ skrzyni biegow w samochodzie (manualna, automatyczna, dwusprzeglowa, DSG, etc.): ");
        fgets(auto1.skrzyniaBiegowRodzaj, sizeof(auto1.skrzyniaBiegowRodzaj), stdin);
    } while (auto1.skrzyniaBiegowRodzaj[0] == '\n');  // Sprawdzenie, czy użytkownik wprowadził coś innego niż pusty wiersz
    
    do {
    	fflush(stdin);
        printf("Podaj ilosc biegow w skrzyni samochodu: ");
        while (scanf("%d", &auto1.skrzyniaBiegowIloscBiegow) != 1 || auto1.skrzyniaBiegowIloscBiegow <= 0) {
            printf("Nieprawidlowa ilosc biegow w skrzyni. Podaj jeszcze raz: ");
            while (getchar() != '\n');  // Opróżnienie bufora
        }
    } while (auto1.skrzyniaBiegowIloscBiegow <= 3);

	do {
    	fflush(stdin);
        printf("Na jakim paliwie jezdzi samochod? (benzyna, diesel, lpg, wodor, elektryczny, benzyna + lpg): ");
        fgets(auto1.rodzajPaliwa, sizeof(auto1.rodzajPaliwa), stdin);
    } while (auto1.rodzajPaliwa[0] == '\n');  // Sprawdzenie, czy użytkownik wprowadził coś innego niż pusty wiersz

    return auto1;
}

void wyswietl(struct Samochod samochody[], int ilosc) {
    printf("Dane samochodow:\n");

    for (int i = 0; i < ilosc; i++) {
        printf("\nSamochod %d:\n", i + 1);
        printf("Marka: %s", samochody[i].marka);
        printf("Model: %s", samochody[i].model);
        printf("Rocznik: %d\n", samochody[i].rocznik);
        printf("Silnik: %s", samochody[i].silnik);
        printf("Moc silnika [KM]: %d\n", samochody[i].mocSilnika);
        printf("Pojemnosc skokowa silnika [cm^3]: %d\n", samochody[i].pojemnoscSkokowaSilnika);
        printf("Rodzaj skrzyni biegow: %s", samochody[i].skrzyniaBiegowRodzaj);
        printf("Ilosc biegow w skrzyni: %d\n", samochody[i].skrzyniaBiegowIloscBiegow);
        printf("Paliwo na jakim jezdzi samochod: %s", samochody[i].rodzajPaliwa);
    }
}
