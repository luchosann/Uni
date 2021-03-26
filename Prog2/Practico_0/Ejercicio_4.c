/*Ejercicio 4 Es Palíndrome
Considere ahora que la frase se representa como un arreglo de caracteres implementado como char
*frase.
(a) ¿Qué diferencias hay entre esta representación y la que utilizó en el Ejercicio 3?
(b) Escriba una función EsPalindrome que recibe una frase representada como un puntero a caracter y
devuelve TRUE si la misma es un palíndrome, FALSE en otro caso.*/
#include <string.h>
#include <stdio.h>


int EsPalindrome(char *frase){

	int inicio = 0, fin;

	int largo = strlen(frase);
		fin = largo - 1;

	while(frase[inicio] == frase[fin]){

			
			if (inicio >= fin)
					return 1;

			inicio++;
			fin--;
	}

	return 0;
}

int main(){
	
	char fras[1000];
	printf("Escriba una frase para ver si es palíndrome\n");
	scanf("%s", fras); 

	if (EsPalindrome(fras) == 1){
		
		printf("Es Palindrome\n");
	} else {
		printf("No es Palindrome\n");
	}



	return 0;
}