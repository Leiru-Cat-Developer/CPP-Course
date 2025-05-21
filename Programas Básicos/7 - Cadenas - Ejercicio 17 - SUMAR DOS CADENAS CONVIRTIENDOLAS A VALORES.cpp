/*
	PEDIR AL USUARIO 2 CADENAS DE CARACTERES DE N�MEROS, UNO ENTERO Y OTRO REAL,
	CONVERTIRLOS A SUS RESPECTIVOS VALORES Y POR ULTIMO SUMARLOS
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	char cadenaNumeroEntero[100];
	char cadenaNumeroFlotante[100];
	cout<<"DIGITE UN N�MERO ENTERO: ";		cin.getline(cadenaNumeroEntero,100,'\n');
	cout<<"DIGITE UN N�MERO FLOTANTE: ";	cin.getline(cadenaNumeroFlotante,100,'\n');
	//GUARDAMOS LOS VALORES PARA REALIZAR LA SUMA CON LAS FUNCIONES NECESARIAS
	int numeroEntero = atoi(cadenaNumeroEntero);
	float numeroReal = atof(cadenaNumeroFlotante), suma = numeroEntero + numeroReal;
	cout<<endl;
	cout<<"EL TOTAL DE LA SUMA ES: "<<suma<<endl<<endl;
	system("pause");
	return 0;
}
