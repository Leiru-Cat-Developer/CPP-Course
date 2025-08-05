/*
	ARCHIVOS O FICHEROS
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
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void escribir(){
	//ETIQUETADOR O DESCRIPTOR
	ofstream archivo;
	string nombreDelArchivo, frase;
	cout<<"DIGITE EL NOMBRE DEL ARCHIVO: ";		getline(cin,nombreDelArchivo);
	archivo.open(nombreDelArchivo.c_str(),ios::out);		//ABRIENDO EL ARCHIVO, NOMBRE O UBICACIÓN MÁS NOMBRE
	if(archivo.fail()){
		cout<<"EL ARCHIVO NO SE PUDO CREAR . . ."<<endl<<endl;
		exit(1);							//FINALIZAR EL PROGRAMA EN CASO DE QUE NO FUNCIONE
	}
	cout<<"DIGITE EL TEXTO DEL ARCHIVO: ";		getline(cin,frase);
	archivo<<"HOLA ¿QUE TAL? MI NOMBRE ES URIEL";	//ESCRIBIR EN EL ARCHIVO
	archivo<<frase;
	archivo.close();							//CERRAR EL ARCHIVO
}
