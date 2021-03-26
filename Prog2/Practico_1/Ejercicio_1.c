#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

typedef struct crearPila {
	int cima;
	int elementos[MAX];
}PILA;

typedef int bool;

PILA *init(PILA *s);
bool apilar(int x, PILA *s);
bool esVacia(PILA *s);
int cima(PILA *s);
bool desapilar(PILA *s);
int imprimir(PILA *s);
int cantidad(PILA *s, int x);
int cambiar(int x, int y, PILA *s);
int iguales(PILA *p1, PILA*p2);




int main() {


	PILA *pila1;
	PILA *pila2;
	pila1 = init(pila1);
	pila2 = init(pila2);
	int n, c1, c2;

	for (int i = 0; i <= 100; ++i){
		apilar(i , pila1);
	};
	
	imprimir(pila1);
	

	printf("Numero para buscar la cantidad de ocurrencias:\n");
	scanf("%d", &n);
	int cantida = cantidad(pila1, n);
	printf("El numero %d se repite %d veces\n", n,cantida);


	printf("Seleccione dos numeros a cambiar\n");
	scanf("%d", &c1);
	scanf("%d", &c2);
	cambiar(c1, c2, pila1);


	if (iguales(pila1, pila2))	{
		printf("Las pilas son iguales\n");
	}else {
		printf("Las pilas son diferentes\n");
	};


	printf("Pila 1\n");
	imprimir(pila1);
	printf("Pila 2\n");
	imprimir(pila2);


}




PILA *init(PILA *s){
	s = (PILA *) malloc(sizeof(PILA));
	s->cima=MAX+1;
};


bool apilar(int x, PILA *s){
	if (s->cima==1)
		return FALSE;
	else {
		s->cima = s->cima-1;
		s->elementos[s->cima] = x;
		return TRUE;
	}
};


bool esVacia(PILA *s){

	if (s->cima == 101) {
		return 1;
	} else {
		return 0;
	};

};


int cima(PILA *s){

	printf("%d\n", s->elementos[s->cima]);
	return	s->elementos[s->cima];

};


bool desapilar(PILA *s){

	s->cima = s->cima+1;
	s->elementos[s->cima] = s->elementos[s->cima];

};


int cantidad (PILA *s, int x){

	int ocurr = 0;
	;

	for (int i = 0; i < MAX; ++i) {
	
		if (s->elementos[i] == x)
			ocurr++;

	};
	return ocurr;
}


int imprimir(PILA *s){

	for (int i = 1; i < 100; ++i){
		printf("%d\t", s->elementos[i]);
	}
	printf("\n");

};


int cambiar(int x, int y, PILA *s){

	int ocurr = 0;

	for (int i = 0; i < MAX; ++i) {
	
		if (s->elementos[i] == x)
			s->elementos[i] = y;
			ocurr++;

	};
	return ocurr;
};

int iguales(PILA *p1, PILA *p2){

	int count = 0;
	for (int i = 0; i < MAX; ++i){
		if (p1->elementos[i] == p2->elementos[i]) {
			count++;
		} else {
			count = 0;
		}
	};

		if (count == p1->cima && count == p2->cima){
			return 1;
		} else {
			return 0;
		};
};