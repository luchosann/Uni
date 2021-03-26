#include <stdio.h>
#include <math.h>
int main() {
    int num;
    for (num=2 ; num <= 10; num +=2 ) {
        printf("%.f ", pow(num, 3 ) );
    }
    return 0;
}