/*Ejercicio 5 Ordenar arreglo
Escriba un procedimiento que recibe un arreglo de enteros y devuelve un nuevo arreglo que contiene a los
elementos del primero en orden ascendente. Indique qué algoritmos de ordenación utiliza.*/
#include <stdio.h>


int main() {
	

	int t;
	

	printf("Elija en tamanio del arreglo\n");
	scanf("%d", &t);

	int array[t];
	int aux;

	printf("Agrege los valores del arreglo\n");
	
	for (int i = 0; i < t; ++i) {
		scanf("%d", &array[i]);
	}

	for (int i = t-1; i > 0; --i){

		for (int j = 0; j < i; ++j) {
		
			if (array[j] > array[j+1]) {
			
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	

	for (int i = 0; i < t; ++i) {
		printf("%d\t", array[i]);
	}


	return 0;
}