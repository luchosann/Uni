/*Ejercicio 3 Ocurrencias
Se quiere implementar una función que cuente la cantidad de veces que una letra aparece en una frase.
La frase se representa como un arreglo de caracteres, y dado que se conoce que el largo máximo de una
frase es de 100 caracteres, la frase se implementa como char frase[100] .
Usando esta representación escriba una función Ocurrencias que recibe una frase, un natural llamado
largo que representa el número de caracteres en la frase, y el caracter a buscar (almacenado en la variable
letra), y devuelve el número de ocurrencias del carácter letra en el arreglo frase.*/

#include <stdio.h>
#include <ctype.h>


int ocurrencias (char frase[100], int largo, char letra){

	int ocurr = 0;
	char upletra = toupper(letra);

	for (int i = 0; i < largo; ++i) {
	
		if (toupper(frase[i]) == upletra)
			ocurr++;

	}
	return ocurr;
}


int main(){
	
	int lar;
	char letr, fras[100];

	printf("Ingrese el largo del arreglo\n");
		scanf("%d", &lar);

	printf("Ingrese frase\n");
		scanf("%s",  fras);

	int contar = ocurrencias(fras, lar, 'a');

	printf("%d\n", contar);

	return 0;
}