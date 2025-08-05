/*
	FUNCIÓN strcpy() - COPIAR EL CONTENIDO DE UNA CADENA A OTRA
	
	strcpy(fraseNueva,fraseQueQueremosCopiar);
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char frase1[] = "HOLA ¿CÓMO ESTÁS?";
	char frase2[100];
	strcpy(frase2,frase1);
	cout<<"FRASE COPIADA: "<<frase2<<endl;
	return 0;
}
