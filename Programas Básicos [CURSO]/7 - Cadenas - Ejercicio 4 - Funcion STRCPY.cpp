/*
	FUNCI�N strcpy() - COPIAR EL CONTENIDO DE UNA CADENA A OTRA
	
	strcpy(fraseNueva,fraseQueQueremosCopiar);
*/
#include<iostream>  //LIBRER�A EST�NDAR
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1
#include<conio.h>   //LIBRER�A PARA PAUSAS 2
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char frase1[] = "HOLA �C�MO EST�S?";
	char frase2[100];
	strcpy(frase2,frase1);
	cout<<"FRASE COPIADA: "<<frase2<<endl;
	return 0;
}
