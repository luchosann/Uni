/*Ejercicio 1 Promedio clase
Suponga que a los estudiantes de programación 2 se les dice que su calificación final será el promedio de
las cuatro calificaciones más altas de entre las cinco que hayan obtenido en el curso.
(a) Escribir una función llamada PromClase con cinco parámetros de entrada (las calificaciones obtenidas)
y un parámetro de salida (la calificación promedio), que realice dicho cálculo
(b) Escribir un programa principal (main()) que permita ejecutar la función PromClase. Dicho programa
deberá leer de la entrada estándar (teclado) 5 calificaciones, invocar al procedimiento PromClase con
dichos parámetros, y finalmente mostrar en la salida estándar (pantalla) el resultado.*/

#include <stdio.h>

int PromClase(int c1,int c2, int c3, int c4, int c5) {
    int promedio = ((c1 + c2 + c3 + c4 + c5)/5);
    return promedio;
}

int main() {
    int c1, c2, c3, c4, c5,promedio;
    printf("Introduzca las 5 calificaciones del alumno\n");
        scanf("%d",&c1);
        scanf("%d",&c2);
        scanf("%d",&c3);
        scanf("%d",&c4);
        scanf("%d",&c5);

    promedio = PromClase(c1,c2,c3,c4,c5);

    printf("El promedio del alumno es %d", promedio);
    return 0;
}