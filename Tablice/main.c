#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int auta[3][3] = { {1, 2, 3},
				   {4, 5, 6},
				   {7, 8, 9} };
 
int main(int argc, char *argv[]) {
	
		for (int i = 0; i < 3; i++) {
			printf("%d %d %d\n", auta[i][0], auta[i][1], auta[i][2]);
		}
	return 0;
}