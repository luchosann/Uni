#include <stdio.h>
#include <math.h>
int main() 


{ 

	int x,y, x1,y1; 
	double funcion, maximo;
	maximo =0;
   	
   		for ( y = -10 ; y <= 10 ; y += 1 ) 

				{
			for ( x = -10 ; x <= 10 ; x += 1 ) 

				{ 
				
				 	funcion=pow( x, 2 ) - 9*x*y + pow( y, 2 ); //f(x,y)=x2 - 9*x*y +y2
				 	
				 	if  (maximo < funcion)
				 		{ maximo=funcion;
				 		  x1=x;
				 		  y1=y;
				 	} 
					
					


				} 
			
			
		}
			printf( "X %d Y %d Maximo %.lf ",x1,y1,maximo); 
					printf("\n");
	
	return 0; 
	

}
