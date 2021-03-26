#include <stdio.h>

int main() {
    int numero1,numero2,suma,d,e;

    printf("escriba un numero entero: \n");
    scanf("%d", &numero1);
    printf("escriba un numero entero: \n");
    scanf("%d", &numero2);
    suma=0;

    if ((numero1 < 0) && (numero2 > 0)){
        printf("ERROR el primer numero debe ser mayor que cero y el segundo menor que cero \n");
    } else
    {
            do {
        printf("%d " , numero2 );
        suma += numero2;
        numero2++;
    }
    while (numero2 <= numero1);
    printf( "\n la suma es %d", suma);
    }
    


    
}