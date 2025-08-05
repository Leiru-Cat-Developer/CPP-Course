/*
	PEDIR AL USUARIO UNA CADENA DE CARACTERES, ALMACENARLA EN UN ARREGLO Y COPIAR
	TODO SU CONTENIDO HACIA OTRO ARREGLO DE CARACTERES
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char frase1[100];
	char frase2[100];
	cout<<"DIGITE UNA FRASE: ";	cin.getline(frase1,100,'\n');
	strcpy(frase2,frase1);
	cout<<"LA FRASE ES: "<<frase2<<endl;
	system("pause");
	return 0;
}

