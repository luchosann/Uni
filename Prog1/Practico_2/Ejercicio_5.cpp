#include <stdio.h>

int main() {
    int num=0;

    printf("Introduzca el tipo de bomba para la maquina \n");
    printf("seleccione un numero del 0 al 4 \n");
    scanf("%d" , &num );
    
    if      (num == 0) {
        printf("No hay establecido un valor definido para el tipo de bomba");
    }
    else if (num == 1) {
        printf("La bomba es una bomba de agua");
    }
    else if (num == 2) {
        printf("La bomba es una bomba de gasolina");
    }
    else if (num == 3) {
        printf("La bomba es una bomba de hormigon");
    }
    else if (num == 4) {
        printf("La bomba es una bomba de pasta alimenticia");
    }
    if      (num < 0 || num > 4) {
        printf("No existe un valor valido para tipo de bomba");
    }
    return 0;
}