#include <stdio.h>
#include <stdlib.h>
const int MAX_SIZE=2; //rozmiar tablicy(zakładamy że jest kwadratowa)
void readTab2D(double a[][MAX_SIZE], int size);
void printTab2D(double a[][MAX_SIZE], int size);
double maxTab2D(double a[][MAX_SIZE], int size, int* maxW, int* maxK);
int wiekszeOdZera2D(double a[][MAX_SIZE], int size);
double* sumWierszy(double a[][MAX_SIZE], int size);
int main(int argc, char *argv[])
{
 double tab2D[MAX_SIZE][MAX_SIZE];
 printf("Podaj tablice o rozmiarze %dx%d:\n", MAX_SIZE, MAX_SIZE);
 readTab2D(tab2D, MAX_SIZE); //wczytaj tab z klawiatury
 printTab2D(tab2D, MAX_SIZE); //wyświetl tab
 int ileWiekszychOdZera;
 ileWiekszychOdZera = wiekszeOdZera2D(tab2D,MAX_SIZE);
 printf("Tablica zawiera %d elementow wiekszych ode zera\n", ileWiekszychOdZera);
 int maxW, maxK;
 double max1 = maxTab2D(tab2D, MAX_SIZE, &maxW, &maxK); //znajdź max
 printf("Max = %lf na pozycji[%d][%d]\n", max1,maxW, maxK); //wypisz max
 double* sumW = sumWierszy(tab2D, MAX_SIZE);
 printf("Sumy elementow w poszczegolnych wierszach:\n");
 printTab(sumW, MAX_SIZE);
 free(sumW);
 //system("PAUSE");
 return EXIT_SUCCESS;
}
//Znajdywanie maksymalnego elementu w tablicy 2D
//Indeksy jako zmienne przekazywane przez wskaźnik, aby mozna w nich zapisać wyniki
double maxTab2D(double a[][MAX_SIZE], int size, int* maxW, int* maxK){
 double max = a[0][0];
 *maxW = 0;
 *maxK = 0;
 for(int i=0; i<size;i++){ //po wierszach
 for(int j=0; j<size;j++){ //po kolumnach
 if(a[i][j]>max){
 max = a[i][j];
 *maxW = i;
 *maxK = j;
 }
 }
 }
 return max;
}
//Wczytywanie tablicy 2D z klawiatury - WIERSZAMI!
void readTab2D(double a[][MAX_SIZE], int size)
{
for(int i = 0; i < size; i++) //po wierszach
{
 for(int j = 0; j < size; j++) //po kolumnach
{
 do{
 fflush(stdin);
 printf("tab[%d][%d]=",i,j);
 }while(!scanf("%lf",&a[i][j]));
}
}
}
//Wyświetlanie tablicy 2D na ekranie
void printTab2D(double a[][MAX_SIZE], int size)
{
 for(int i = 0; i < size; i++) //pętla po wierszach
{
 for(int j = 0; j < size; j++) //pętla po kolumnach
 printf(" %lf", a[i][j]);
 printf("\n");
}
}
int wiekszeOdZera2D(double a[][MAX_SIZE], int size)
{
int licznik = 0;
 for(int i = 0; i < size; i++) //pętla po wierszach
{
 for(int j = 0; j < size; j++) //pętla po kolumnach
 if(a[i][j]>0)
licznik++;
}
return licznik;
}
double* sumWierszy(double a[][MAX_SIZE], int size){
double* tab = malloc(size * sizeof(double*)); //alokacja pamieci na wyniki
if(tab == NULL)
 printf("Brak pamieci na rezerwcje tablicy!\n");
 double sumW;
 for(int i = 0; i < size; i++) //pętla po wierszach
{
 sumW = 0;
 for(int j = 0; j < size; j++) //pętla po kolumnach
 {
 sumW = sumW + a[i][j];
}
tab[i]=sumW;
}
 return tab;
}
/*Wyświetlenie tablicy 1D na ekranie w pionie*/
void printTab(double tab[], int max){
int i;
for(i = 0; i < max; i++){
printf("%lf\n", tab[i]);
}
printf("\n");
}