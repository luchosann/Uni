#include <stdio.h>
void intercambiar(int &a, int &b);

int main() 
{// Un array de 12 números enteros
 int array[17] =  {58, 45, 4 ,8, 42, 23, 29, 87, 12, 16, 78, 57, 91, 11, 5, 17, 25}; 
 int i,j,menor=array[0];
 int mayor=array[0];
 int n=17;
 
 			
	for(i=0;i<n;i++)
		printf ("%d\n",array[i]);
 
 
		for(i=1;i<n;i++)//minimo
			if(array[i]<menor)
				menor=array[i];
		for(i=1;i<n;i++)//maximo
			if(array[i]>mayor)
				mayor=array[i];		
				
	printf ("minimo %d\n",menor);
	printf ("maximo %d\n",mayor);
	
	for(i=n-1;i>0;i--)
		for(j=0;j<i;j++)
			if(array[j]>array[j+1])
				intercambiar(array[j],array[j+1]);
				
				
				
	for(i=0;i<n;i++)
		printf ("%d\n",array[i]);
		
 return 0;
}

void intercambiar(int &a, int &b){
	int aux;
    aux = a;
    a = b;
    b = aux;
    }
