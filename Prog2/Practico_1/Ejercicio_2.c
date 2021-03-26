#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

typedef	struct Cola {
		int elemento;
	} COLA;


void CrearCola(COLA *c);

int enColar(unsigned int x, COLA *c[]);


int main(){

	
	int x, y, largo, largo2;

	printf("Elija el larogo de cola1\n");
	scanf("%d", &x);

	COLA *cola1[x];
	
	CrearCola(*cola1);

	largo = sizeof(cola1)/sizeof(cola1[0]);
	printf("1) %d\n", largo);
	



}

void CrearCola(COLA *c) {
	c = (COLA *) malloc(sizeof(COLA));
	
};


int enColar(unsigned int x, COLA *c[]){



};