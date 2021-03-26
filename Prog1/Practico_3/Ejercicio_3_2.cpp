#include <stdio.h>

int main(){
    int a,b,c,d,e,num,i,fin;
    printf("Introduzca numero 1\n"); scanf("%d",&a);
    printf("Introduzca numero 2\n"); scanf("%d",&b);
    printf("Introduzca numero 3\n"); scanf("%d",&c);
    printf("Introduzca numero 4\n"); scanf("%d",&d);
    printf("Introduzca numero 5\n"); scanf("%d",&e);

if(( 0 < a && a < 60) && ( 0 < a && a < 60) && ( 0 < a && a < 60) && ( 0 < a && a < 60) && ( 0 < a && a < 60)) {
    for(i=1 ; i <= 5 ; i += 1) {

        switch (i) {
        case 1: fin=a; break;
        case 2: fin=b; break;
        case 3: fin=c; break;
        case 4: fin=d; break;
        case 5: fin=e; break;
        }
        for(num = 1; num <= fin ; num += 1)
            printf("*");
            printf("\n");
    }

    }

    }