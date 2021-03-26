#include <math.h>
#include <stdio.h>

double a, b, c, d,e;

int main() {
	double a, b, c, d,e;
	printf("Introduzca los valores paramtericos\n");
	printf("introduzca 'a'\n");
	scanf("%f",&a);
	printf("introduzca 'b'\n");
	scanf("%f",&b);
	printf("introduzca 'c'\n");
	scanf("%f",&c);
	d = pow (b,2) - 4 * a * c;     e = 2 * a;
	if (d==0) { printf("x1 = x2 = %lf", -b / e);
	} 
	else if (d>0) {
		printf("El resultado es \n");
		printf("x1= %lf \n", (-b + sqrt(d))/e);
		printf("x2= %lf \n", (-b - sqrt(d))/e);
	}
	else {
		printf("El resultado es: \n");
		printf("x1 =%lf + %lf * i \n", -b / e , sqrt (-d)/e);
		printf("x2 =%lf + %lf * i \n", -b / e , sqrt (-d)/e);
	}
	return 0;
}
