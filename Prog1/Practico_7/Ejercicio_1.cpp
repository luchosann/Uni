#include <stdio.h>
#include<iostream>

using namespace std;


int main(void) {

    int i = 0;

    struct persona {

        char nombre[15];
        char apellido[15];
        int edad;
        char sexo[10];
        char direccion[50];
        int telefono;
    };

    int max=5;

    struct persona amigo[max];

    for (i = 0; i < 5; i++) {

	cout<<"\nEscriba el Nombre "<< i+1<<": ";
	cin>> amigo[i].nombre;

	cout<<"\nEscriba el Apellido "<< i+1<<": ";
	cin>> amigo[i].apellido;

	cout<<"\nEscriba la Edad de "<< i+1<<": ";
	cin>> amigo[i].edad;

	cout<<"\nEscriba el sexo "<< i+1<<": ";
	cin>> amigo[i].sexo;

	cout<<"\nEscriba la Direccion de "<< i+1<<": ";
	cin>> amigo[i].direccion;

	cout<<"\nEscriba el Telefono de "<< i+1<<": ";
	cin>> amigo[i].telefono;

    cout<<"\n";

    }

cout<<"/nEl registro de Alumnos que se introdujeron son: \n\n";

    for (i = 0; i < 5; i++) {
        cout<<"\t"<<amigo[i].nombre;
        cout<<"\t"<<amigo[i].apellido;
        cout<<"\t"<<amigo[i].edad;
        cout<<"\t"<<amigo[i].sexo;
        cout<<"\t"<<amigo[i].direccion;
        cout<<"\t"<<amigo[i].telefono<<"\n\n";
    }


    return 0;
}