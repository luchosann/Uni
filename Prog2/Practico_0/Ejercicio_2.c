/*Ejercicio 2 Primos
Escriba un procedimiento que calcule e imprima en pantalla todos los números primos entre dos enteros
positivos A y B cualesquiera.*/

#include <stdio.h>


int main() {
	
	int num1, num2, count = 0, aux, i;
	

	printf("Elija 2 numeros\n");
		scanf("%d", &num1);
		scanf("%d", &num2);


        for (num1; num1 <= num2; num1++){
            
            
            for (int i = 1; i < num1; ++i){
                if (num1 % i == 0)
                    count++;
            }


            if (count == 1)
                printf("%d \t", num1);

            count=0;

        }

        printf("\n");

    return 0;

}