/*
	CREAR UNA CADENA QUE TENGA LA SIGUIENTE FRASE "HOLA QUE TAL", LUEGO CREAR OTRA
	CADENA PARA PREGUNTARLE AL USUARIO SU NOMBRE, POR �LTIMO A�ADIR EL NOMBRE AL
	FINAL DE LA PRIMERA CADENA Y MOSTRAR EL MENSAJE COMPLETO "HOLA QUE TAL + EL
	NOMBRE DEL USUARIO"
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char fraseUno[] = "HOLA QUE TAL ";
	char fraseDos[100];
	char fraseTres[200];
	cout<<"DIGITE SU NOMBRE: ";	cin.getline(fraseDos,100,'\n');
	strcpy(fraseTres,fraseUno);	//PRIMERO COPIAMOS LA PRIMERA FRASE EN LA TERCERA
	strcat(fraseTres,fraseDos);	//LUEGO CONCATENAMOS LA SEGUNDA CON LA TERCERA
	cout<<endl;
	cout<<fraseTres<<endl<<endl;	//MOSTRAMOS EN PANTALLA
	system("pause");
	return 0;
}
