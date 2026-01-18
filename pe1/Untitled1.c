#include <stdio.h>
#include <stdlib.h>

void insert(char tab[]) {
	printf("Podaj liczby do tablicy (max 79 znakow): ");
	fgets(tab, 80, stdin);
	printf("\n");
}
void display(char tab[]) {
	printf("Wprowadzone zdanie: \n");
	for (int i = 0; i < 80; i++) {
		printf("%s",tab[i]);
	}
}

int pozycja(char tab[]) {
	int a = 0, b = 0;
	int pozycje[80];
	for(int i = 0; i < 80; i++) {
		if(tab[i] == '0' || tab[i] == '1' || tab[i] == '2' || tab[i] == '3' ||tab[i] == '4' || tab[i] == '5' || tab[i] == '6' || tab[i] == '7' || tab[i] == '8' || tab[i] == '9') {
		a++;
		pozycje[i]=i;
	} else {
		pozycje[i]=i;
		}
	}
	b=a;
	b=b-1;
	printf("%d",a);
	if(a!=0) {
		for(int i=0;i<80;i++){
			if(pozycje[i]<80){
				if (b==0 && a!=0) {
					printf("%d", pozycje[i]);
				}
				if(b!=0 && a!=0){
					b--;
					printf("%d, ", pozycje[i]);
				}
			}
		}
	}
	return a;
}

int main(){
	int wier;
	char tab[80];
	//double *tab = malloc(wier *sizeof (double));
	
	insert(tab);
	display(tab);
	pozycja(tab);
	return 0;
}