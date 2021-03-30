// Este no anda xd
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mcd(int num1, int num2);

int main()
{
    
    return 0;
}

int mcd(int num1,int num2){

    int n = 2;
    if (num1 % n == 0 && num2 % n == 0) {
        return n;
    } else {
        n++;
        mcd(num1,num2);
    }
    

};