#include <stdio.h>


int main() { 

	int matriz1[2][2]; 
	int matriz2[2][2]; 
	int matrizSuma[2][2]; 
	int i,j;
	

	for (j=0; j<2; j++)
			for (i=0; i<2; i++) { 
				printf ("Introduce la componente Columna %d, fila %d de la matriz ",i+1,j+1);     
				scanf ("%d", &matriz1[i][j]);
			}
	for (j=0; j<2; j++)
			for (i=0; i<2; i++) { 
				printf ("Introduce la componente Columna %d, fila %d de la matriz ",i+1,j+1);     
				scanf ("%d", &matriz2[i][j]); 
			}
		
	for (j=0; j<2; j++) 
			for (i=0; i<2; i++) 
				matrizSuma[i][j]= matriz1[i][j] + matriz2[i][j];
	
			
		printf ("El vector suma es");
		for (i=0; i<3; i++) 
			for (j=0; j<3; j++)
			printf ("%d",matrizSuma[i][j]);
			
	return 0;
	
	}
	
