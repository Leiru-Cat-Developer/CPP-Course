/*
	CREAR UNA CADENA QUE TENGA LA SIGUIENTE FRASE "HOLA QUE TAL", LUEGO CREAR OTRA
	CADENA PARA PREGUNTARLE AL USUARIO SU NOMBRE, POR ÚLTIMO AÑADIR EL NOMBRE AL
	FINAL DE LA PRIMERA CADENA Y MOSTRAR EL MENSAJE COMPLETO "HOLA QUE TAL + EL
	NOMBRE DEL USUARIO"
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
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
