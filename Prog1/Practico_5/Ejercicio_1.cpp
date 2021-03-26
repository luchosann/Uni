#include <stdio.h>

int main() {
    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int mes;
    
    printf("Indique un mes del año");
    scanf("%d", &mes);
    printf("%d",&meses[mes-1]);
    return 0;
}