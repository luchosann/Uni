#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    //Declaración de variables
    double a, b, c, d, e;
    printf("Programa para calcular la raiz cuadratica tipo a*x^2 + b*x + c = 0\n\n");
    //Obtención de datos
    printf ("Introduzca valor parametro a: ");     scanf ("%lf", &a);
    printf ("Introduzca valor parametro b: ");     scanf ("%lf", &b);
    printf ("Introduzca valor parametro c: ");     scanf ("%lf", &c);
    //Cálculo y muestra de resultados
    d = pow (b,2) - 4 * a * c;     e = 2 * a;
    if (d == 0) { printf ("El resultado es x1 = x2 =%lf", - b / e);
    } else {
        if (d > 0) {
            printf ("El resultado es:\n");
            printf ("x1 = %lf \n", (-b + sqrt(d)) / e);
            printf ("x2 = %lf \n", (-b - sqrt(d)) / e);
        } else {
            printf ("El resultado es: \n");
            printf ("x1 = %lf + %lf * i \n", -b / e, sqrt(-d)/e);
            printf ("x2 = %lf - %lf * i \n", -b / e, sqrt(-d)/e);
        }
    }
    return 0;
}
