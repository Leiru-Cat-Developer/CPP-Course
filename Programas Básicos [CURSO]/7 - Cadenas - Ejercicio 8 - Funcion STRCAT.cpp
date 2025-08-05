/*
	AÑADIR O CONCATENAR UNA CADENA CON OTRA - FUNCIÓN strcat()
	
	strcat(PRIMERA FRASE, SEGUNDA FRASE)
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char palabraUno[] = "PALABRAS ";
	char palabraDos[] = "ALEATORIAS";
	char palabraConcatenada[100];
	strcpy(palabraConcatenada,palabraUno);	//PRIMERO COPIAR LA PRIMERA CADENA EN UNA TERCERA
	strcat(palabraConcatenada,palabraDos);	//DESPUÉS CONCATENAR LA SEGUNDA CADENA
	cout<<palabraConcatenada<<endl<<endl;
	system("pause");
	return 0;
}
