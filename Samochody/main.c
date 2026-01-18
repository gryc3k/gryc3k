#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Auto {
	char marka[20];
	char model[40];
	int rok;
};	
	

int main(int argc, char *argv[]) {
	
	struct Auto e36 = {"BMW", "3 E36", 1996};
	struct Auto a4b5 = {"Audi", "A4 B5", 1999};
	struct Auto civic = {"Honda", "Civic 6", 2000};
	
	printf("%s %s %d\n", e36.marka, e36.model, e36.rok);
	printf("%s %s %d\n", a4b5.marka, a4b5.model, a4b5.rok);
	printf("%s %s %d\n", civic.marka, civic.model, civic.rok);
	
	return 0;
}