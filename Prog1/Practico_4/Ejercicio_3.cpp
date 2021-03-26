#include <stdio.h> 

int main() 


{ 
	char seguir; 
	int acumulador, contador, numero; 
	acumulador = 0; 
	contador = 0;

	do { 
	
		printf( "Introduzca un numero entero: " ); 
		scanf( "%d", &numero ); 
		acumulador += numero; 
		contador++;
		printf( "Ha introducido %d numero(s).", contador ); 
		printf( "\nLa suma es %d", acumulador ); 
		printf( "\n\nDesea introducir otro numero (s/n)?: " ); 
		fflush( stdin ); 
		scanf( "%c", &seguir ); 
		}
		
	while ( seguir != 'n' ); 
	
	printf( "La media aritmetica es %f", ( float ) acumulador / contador ); 
	
	return 0;
	
	}
