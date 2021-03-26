#include <stdio.h>

int main() {
    int acumulador, contador, numero; acumulador = 0; contador = 0;

    printf("escriba un numero entero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        acumulador += numero;
        contador++;

        printf("escriba un numero entero: ");
        scanf("%d", &numero);
    }

    printf("Ha introducido %d numero(s).", contador );
    printf("\n La suma es %d", acumulador );


}