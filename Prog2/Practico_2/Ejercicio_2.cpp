#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 0
#define FALSE 1
bool esPalindromeRec(char *fras, uint inf, uint sup);
bool pal(char *fras, uint largo);


int main(){
    
	char fras[1000];
	int l;

	printf("Ingrese la frase\n");
	scanf("%s", fras);

	l = strlen(fras);
	printf("%d\n", l);



if (pal(fras, l) == TRUE){
		printf("Es Palindrome\n");
	} else {
		printf("No es Palindrome\n");
	}

    return 0;
}


bool esPalindromeRec(char *fras, uint inf, uint sup){
	bool res;

	if ( inf >= sup)
		res = TRUE;
	else if (fras[inf] != fras[sup])
		res = FALSE;
	else 
		res = esPalindromeRec(fras, inf + 1, sup -1);

	return res;
} 


bool pal(char *fras, uint largo){
	return esPalindromeRec(fras, 0, largo);
};