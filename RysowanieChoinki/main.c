#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void) {

    int wysokosc;
    
    printf("Podaj wysokosc choinki: ");
    scanf("%d", &wysokosc);


    for(int i = 1; i <= wysokosc; i++) {

        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}