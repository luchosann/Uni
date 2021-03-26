#include <stdio.h>

int main() 
{// Un array de 12 n�meros enteros
 int meses[12] =  {31, 28, 31, 30, 31,30,31,31,30,31,30,31}; 

 int mes;
 
 printf ("Introduzca el mes ");
 scanf ("%d", &mes);
  
 printf("%d", &meses[mes-1]);
 
 return 0;
}
