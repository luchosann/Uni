#include <stdio.h>
void cargo (int a[], int tamanio);
void suma (int a[], int v1[],int v2[],int tamanio);

int main() { 

	int vector1[3]; 
	int vector2[3]; 
	int vectorSuma[3]; 
	int i;
	

	cargo (vector1, 3);
	cargo (vector1, 3);
		
	suma (vectorSuma, vector1,vector2,3);	
	
			
		printf ("El vector suma es");
		for (i=0; i<3; i++) 
			printf ("%d",vectorSuma[i]);
			
	return 0;
	
	}
	
void cargo (int a[], int tamanio)

	{ 	
		int i;
		for (i=0; i<tamanio; i++) { 
			printf ("Introduce la componente %d del vector ",i+1);     
			scanf ("%d", &a[i]);
			}
}
void suma (int a[], int v1[],int v2[],int tamanio)
	{ 	
		int i;
		for (i=0; i<3; i++) 
			a[i] = v1[i] + v2[i];
	
	}	
