/*
	PEDIR AL USUARIO UNA CADENA DE CARACTERES, ALMACENARLA EN UN ARREGLO Y COPIAR
	TODO SU CONTENIDO HACIA OTRO ARREGLO DE CARACTERES
*/
#include<iostream>  //LIBRER�A EST�NDAR
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1
#include<conio.h>   //LIBRER�A PARA PAUSAS 2
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

