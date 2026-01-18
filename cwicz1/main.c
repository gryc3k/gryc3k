#include <stdio.h>
#include <stdlib.h>

struct Student{
	char imie[20];
	char nazwisko[30];
	int nrAlbumu;
	int sizeOceny;
	double* oceny;
};

void inputStudent(struct Student* student){
	printf("Imie: ");
	scanf("%s", student->imie);
	printf("Nazwisko: ");
	scanf("%s", student->nazwisko);
	do{
		printf("Nr albumu: ");
		fflush(stdin);
	} while((!scanf("%d", &student->nrAlbumu)) || (student->nrAlbumu < 0));
}

void inputStudenci(struct Student* studenci, int size){
	for(int i=0; i<size; i++){
		printf("Student nr %d:\n", i+1);
		inputStudent(&studenci[i]);
	}
}

void printStudenci(struct Student* studenci, int size){
	for(int i=0; i<size; i++){
		printf("Student nr %d:\n", i+1);
		printStudent(&studenci[i]);
	}
}

void printStudent(struct Student* student){
	printf("Imie: %s, ", student->imie);
	printf("Nazwisko: %s, ", student->nazwisko);
	printf("Nr albumu: %d, ", student->nrAlbumu);
	printf("Oceny: ");
	for(int i=0; i<student->sizeOceny; i++){
		printf("%lf, ", student->oceny[i]);
	}
	printf("\n");
}

int dodajOcene(struct Student* studenci, int size, int nrAlbumu, int idxOceny, double ocena){
	int idxStudenta=-1;
	for(int i=0; i<size; i++){
		if(studenci[i].nrAlbumu == nrAlbumu){
			idxStudenta = i;
			break;
		}
	}
	if(idxStudenta < 0)
	return 0;
	if(idxOceny>studenci[idxStudenta].sizeOceny-1){
		studenci[idxStudenta].oceny = realloc(studenci[idxStudenta].oceny, (idxOceny+1)*sizeof(double));
		if(studenci[idxStudenta].oceny==NULL){
			return 0;
		}
		//czyszczenie pamięci powyżej sizeOceny (realloc tego nie robi!)
		for(int i=studenci[idxStudenta].sizeOceny; i<=idxOceny; i++)
			studenci[idxStudenta].oceny[i]=0;
		studenci[idxStudenta].sizeOceny=idxOceny+1;
	}
	studenci[idxStudenta].oceny[idxOceny]=ocena;
	printStudent(&studenci[idxStudenta]);
	return 1;
}

int main(int argc, char *argv[]) {
	int size;
	
	do{
		printf("Ilu studentow? : ");
		fflush(stdin);
	}while(!scanf("%d", &size) || size<=0);
	
	//alokacja pamięci na dynamiczną tablicę studentów
	struct Student* studenci = malloc(size * sizeof(struct Student));
	if(studenci==NULL){
		printf("Brak wolnej pamięci na dane!\n");
		return 0;
	}
	
	//alokacja pamięci na dynamiczne tablice z ocenami dla każdego studenta
	for(int i=0; i<size; i++){
		studenci[i].sizeOceny=5;
		studenci[i].oceny = calloc(studenci[i].sizeOceny, sizeof(double));
		if(studenci[i].oceny==NULL){
			printf("Brak wolnej pamięci na dane!\n");
			return 0;
		}
	}
	
	inputStudenci(studenci, size);
	printStudenci(studenci, size);
	
	char znak;
	int nrAlbumu, idxOceny;
	double ocena;
	
	do{
		printf("Wpisywanie oceny dla studenta:\n");
		do{
			printf("Nr albumu: ");
			fflush(stdin);
		}while(!scanf("%d", &nrAlbumu) || (nrAlbumu < 0));
		
		do{
			printf("Indeks oceny (liczony od zera): ");
			fflush(stdin);
		}while(!scanf("%d", &idxOceny) || (idxOceny < 0));
		
		do{
			printf("Ocena: ");
			fflush(stdin);
		}while(!scanf("%lf", &ocena) || (ocena < 2) || (ocena > 5));
		
		if(!dodajOcene(studenci, size, nrAlbumu, idxOceny, ocena))
			printf("Student o podanym numerze albumu nie istnieje lub brak wolnejpamięci na dane!\n");
			
		printf("Czy powtorzyc? [t - tak]");
		fflush(stdin);
		scanf("%c",&znak);
	}while(znak=='t');
	//zwalnianie pamięci
	for(int i=0; i<size; i++){
		free(studenci[i].oceny);
	}
	free(studenci);
	return 0;
}