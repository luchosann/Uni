#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 0
#define FALSE 1

int palindrome(char *frase, uint largo);

int main(){
    
	char fras[1000];
	int ej;

	printf("Ingrese la frase\n");
	scanf("%s", fras);

	ej = strlen(fras);

if (palindrome(fras, ej) == TRUE){
		
		printf("Es Palindrome\n");
	} else {
		printf("No es Palindrome\n");
	}

    return 0;
}


int palindrome(char *frase, uint largo){
	int inicio = 0, fin;

    fin = largo - 1;

	if (largo != 1) {
		if (frase[inicio] == frase[fin]){
			inicio++;
			palindrome(frase, largo	-1);
			return TRUE;
		} else {
			return FALSE;
		}
	}
};