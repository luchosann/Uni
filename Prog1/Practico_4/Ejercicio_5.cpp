#include <math.h> 
#include <stdio.h> 

int main() 
{ 
int contador; 
float arista; 
printf( "Introduzca arista: " ); 
scanf( "%f", &arista ); 
contador = 0;

while ( arista > 0 ) { 
	printf( "El volumen de un cubo de arista %f es: %f\n", arista, pow( arista, 3 ) ); 
	contador++;
	printf( "Introduzca arista :" ); 
	scanf( "%f", &arista ); }
	
printf( "Ha calculado el volumen de %d cubo(s).", contador ); return 0; }
