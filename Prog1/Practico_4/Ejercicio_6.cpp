#include <stdio.h> 
int main() {
 char seguir; 
 int acumulador, n1, n2; 
 acumulador = 0; 
 
 do { 
 	 printf( "Introduzca primer numero: " ); 
	 scanf( "%d", &n1 ); printf( "Introduzca segundo numero: " ); 
	 scanf( "%d", &n2 ); printf( "La suma es %d", n1 + n2 ); 
	 acumulador += n1 + n2; 
	 printf( "\n\nDesea realizar otra suma (s/n)?: " ); 
	 fflush( stdin ); scanf( "%c", &seguir ); } 
while ( seguir != 'n' ); 

printf( "La suma total es %d", acumulador ); return 0; }
