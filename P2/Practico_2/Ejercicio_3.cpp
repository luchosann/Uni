#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10

int rayuela(int num);
int fact(int i);

int main()  {
    int r, i, e;
    printf("Ingrese i\n");
    scanf("%d", &i);

    e = fact(i);
    printf("xd: %d\n", e);

    r = rayuela(i);
    printf("El numero de posibles caminos es: %d\n", r);

    return 0;
}


int fact(int i){
    if (i <= 1) return 1;
    else return i*fact(i-1);
};

int rayuela(int num){

    int result;
        result = fact(num)/(fact(2)*fact(num - 2));
        return result;

};