#include <stdio.h>

int elemento(int A[],int b) { 
    int k=1 , result=-1;

    do {
        if (A[k]== b)
            result =k;
        else    
            k++;
    } while ((result==-1) && k<17);
    return result;
    
}

int main() {
    int array[17] =  {58, 45, 4 ,8, 42, 23, 29, 87, 12, 16, 78, 57, 91, 11, 5, 17, 25}; 
    int i ,z=0;
    
    
    for(i=0 ; i < 100 ; i++)
        scanf("%d", &array[i]);
    i= elemento( array , 58 ) ;
    printf("El resultado es %d\n", i);


    return 0;
}

