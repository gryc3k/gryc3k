//LAB 26.10  KALKULATOR NA WSKAŹNIKACH

#include <stdio.h>
#include <stdlib.h>

int enterNumber(double *enter){
    fflush(stdin);
    return scanf("%lf", enter);
}
double suma(const double *x,const double *y){
    return *x+*y;
}
double roznica(const double *x, const double *y){
    return *x-*y;
}
double iloczyn(const double *x, const double *y){
    return *x * *y;
}
int iloraz(const double *x, const double *y, double* pwynik){
    if(*y==0){
        return 0;
    }
    else{
        *pwynik = *x / *y;
        return 1;
    }
}

int main(){
    int taknie=0;
    char znak;
    double liczba1, liczba2, wynik;
    double *wliczba1, *wliczba2, *pwynik;
    
    do{
        system("cls");
        do{
            printf("Wprowadz pierwsza liczbe: ");
        } while(!enterNumber(wliczba1 = &liczba1));
        
        do{
            printf("Wprowadz druga liczbe: ");
        } while(!enterNumber(wliczba2 = &liczba2));
        
        do{
            printf("Wybierz operacje(+, -, *, /): ");
            fflush(stdin);
            scanf("%c", &znak);
        } while(znak != '+' && znak != '-' && znak != '*' && znak != '/');
        
        switch(znak){
            case('+'):
                printf("%.2lf", suma(wliczba1, wliczba2));
                break;
            case('-'):
                printf("%.2lf", roznica(wliczba1, wliczba2));
                break;
            case('*'):
                printf("%.2lf", iloczyn(wliczba1, wliczba2));
                break;
            case('/'):
                if(iloraz(wliczba1, wliczba2, pwynik = &wynik)){
                    printf("%.2lf", wynik);
                    break;
                }
                else{
                    printf("Nie mozna dzielic przez 0!");
                    break;
                }
        }
        
        printf("\nCzy chcesz powtorzyc obliczenia? (1-Tak, 0-Nie): ");
        fflush(stdin); 
        while(!scanf("%d", &taknie) && taknie!=1 && taknie!=0){
            printf("Bledne dane\nWprowadz ponownie dane: ");
            fflush(stdin);
        }
    } while(taknie==1);
}