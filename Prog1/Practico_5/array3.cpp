#include <stdio.h>

int main() { 

	int vector1[3]; 
	int vector2[3]; 
	int vectorSuma[3]; 
	int i;
	
	// Pedimos los datos del primer vector
	for (i=0; i<3; i++) { 
		printf ("Introduce la componente %d del vector 1",i+1);     
		scanf ("%d", &vector1[i]);
		}
		
	for (i=0; i<3; i++) { 
		printf ("Introduce la componente %d del vector 2",i+1);     
		scanf ("%d", &vector2[i]);
		}
		
		
		// Calculamos la suma 
		for (i=0; i<3; i++) 
			vectorSuma[i] = vector1[i] + vector2[i];
			
		printf ("El vector suma es");
		for (i=0; i<3; i++) 
			printf ("%d",vectorSuma[i]);
			
	return 0;
	
	}		
