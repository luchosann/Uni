#include <math.h> 
#include <stdio.h> 

int main() 
{ 
float radio;
 
printf( "Introduzca radio: " ); 
scanf( "%f", &radio );

 while ( radio <= 0 )
 {
 	printf( "ERROR: El radio debe ser mayor que cero." ); 
	printf( "\nIntroduzca radio: " ); 
	scanf( "%f", &radio ); 
	} 
	
	
	printf( "El area de la esfera de radio %f es: %f", radio, 4 * 3.141592 * pow( radio, 2 ) );
	
	
return 0; }
