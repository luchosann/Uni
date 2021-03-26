/* CALCULO DEL DIA DEL AÑO */

#include <stdio.h>
#include <stdlib.h>

#define MAXDIA 31
#define MAXMES 12
// Ejercicios resueltos aprenderaprogramar.com
int main() {

    int nDia = 0; int nMes = 0; int diaDelAnyo = 0;

    printf("Calculo del dia del a%co (no bisiesto)\n", 164);
    puts ("");
    printf ("Introduzca el numero del dia: ");
    scanf("%d", &nDia);
    printf ("Introduzca el numero del mes: ");
    scanf("%d", &nMes);

    if ( nDia >= 1 && nDia <= MAXDIA && nMes >= 1 && nMes <= MAXMES) {

        switch (nMes) {

        case 1: diaDelAnyo = nDia; break;
        case 2: diaDelAnyo = nDia + 31; break;
        case 3: diaDelAnyo = nDia + 59; break;
        case 4: diaDelAnyo = nDia + 90; break;
        case 5: diaDelAnyo = nDia + 120; break;
        case 6: diaDelAnyo = nDia + 151; break;
        case 7: diaDelAnyo = nDia + 181; break;
        case 8: diaDelAnyo = nDia + 212; break;
        case 9: diaDelAnyo = nDia + 243; break;
        case 10: diaDelAnyo = nDia + 273; break;
        case 11: diaDelAnyo = nDia + 304; break;
        case 12: diaDelAnyo = nDia + 334; break;
        default: puts ("Datos no validos");

        }
    }
    if (diaDelAnyo !=0) {
        printf ("El %d del %d es el dia %d del a%co\n", nDia, nMes, diaDelAnyo, 164);
    } else {
        puts ("Los datos no son validos");
    }
    return 0;
}
