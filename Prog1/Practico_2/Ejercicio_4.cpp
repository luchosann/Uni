#include <stdio.h>

int main() {
    int num=0;

    printf("Introduzca el tipo de bomba para la maquina \n");
    printf("seleccione un numero del 0 al 4 \n");
    scanf("%d" , &num );
    
    if (num >= 0 && num <= 4) {

        switch (num) {
        case 0: printf("No hay establecido un valor definido para el tipo de bomba");break;
        case 1: printf("La bomba es una bomba de agua"); break;
        case 2: printf("La bomba es una bomba de gasolina"); break;
        case 3: printf("La bomba es una bomba de hormigon"); break;
        case 4: printf("La bomba es una bomba de pasta alimenticia"); break;
        default: puts("No existe un valor valido para tipo de bomba"); break;
        }
    }
    if (num < 0 || num > 4) {
        printf("No existe un valor valido para tipo de bomba");
    }
    return 0;
}
