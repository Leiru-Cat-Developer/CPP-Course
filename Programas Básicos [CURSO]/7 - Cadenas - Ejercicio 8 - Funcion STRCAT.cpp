/*
	A�ADIR O CONCATENAR UNA CADENA CON OTRA - FUNCI�N strcat()
	
	strcat(PRIMERA FRASE, SEGUNDA FRASE)
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char palabraUno[] = "PALABRAS ";
	char palabraDos[] = "ALEATORIAS";
	char palabraConcatenada[100];
	strcpy(palabraConcatenada,palabraUno);	//PRIMERO COPIAR LA PRIMERA CADENA EN UNA TERCERA
	strcat(palabraConcatenada,palabraDos);	//DESPU�S CONCATENAR LA SEGUNDA CADENA
	cout<<palabraConcatenada<<endl<<endl;
	system("pause");
	return 0;
}
