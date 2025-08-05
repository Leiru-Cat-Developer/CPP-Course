/*
	REALICE UN PROGRAMA QUE PIDA AL USUARIO EL NOMBRE DE UN FICHERO DE TEXTO, Y A CONTINUACIÓN PERMITA
	ALMACENAR AL USUARIO TANTAS FRASES COMO EL USUARIO LO DESEE
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
#include<fstream>		//LIBRERÍA PARA ARCHIVOS DE TEXTO
using namespace std;

//PROTOTIPOS DE FUNCIONES
void escribir();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	escribir();
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void escribir(){
	ofstream archivo;
	string nombreDelArchivo,frases;
	char respuesta = 'S';
	cout<<"DIGITE EL NOMBRE DEL ARCHIVO Y LA EXTENSIÓN: ";	getline(cin,nombreDelArchivo);	cout<<endl;
	archivo.open(nombreDelArchivo.c_str(),ios::out);		//ABRIENDO EL ARCHIVO, NOMBRE O UBICACIÓN MÁS NOMBRE
	if(archivo.fail()){
		cout<<"EL ARCHIVO NO SE PUDO CREAR CORRECTAMENTE . . ."<<endl<<endl;
		exit(1);									//FINALIZAR EL PROGRAMA EN CASO DE QUE NO FUNCIONE
	}
	system("pause");
	system("cls");
	while((respuesta == 'S') || (respuesta == 's')){
		fflush(stdin);
		cout<<"DIGITE EL TEXTO DEL ARCHIVO: ";					getline(cin,frases);	cout<<endl;
		archivo<<frases<<endl<<endl;
		cout<<"¿DESEA INGRESAR ALGUNA OTRA FRASE? [S/N]: ";		cin>>respuesta;		cout<<endl;
		if((respuesta != 'S')||(respuesta != 's')){
			system("pause");
			system("cls");
		}
	}
	archivo.close();								//CERRAR EL ARCHIVO
}
