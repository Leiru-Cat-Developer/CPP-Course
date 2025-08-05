/*
	FUNCION strlen() - LONGITUD DE UNA CADENA DE CARACTERES - DEVUELVE UN ENTERO
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int longitud = 0;
	char palabra[] = "HOLA ¿CÓMO ESTÁS?";
	longitud = strlen(palabra);
	cout<<"NÚMERO DE ELEMENTOS DE LA CADENA: "<<longitud;
	return 0;
}

