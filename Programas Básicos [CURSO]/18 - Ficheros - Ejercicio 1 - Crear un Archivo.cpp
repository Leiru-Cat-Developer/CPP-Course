/*
	ARCHIVOS O FICHEROS
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
#include<fstream>		//LIBRER�A PARA ARCHIVOS DE TEXTO
using namespace std;

//PROTOTIPOS DE FUNCIONES
void escribir();

int main(){
	
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	escribir();
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void escribir(){
	//ETIQUETADOR O DESCRIPTOR
	ofstream archivo;
	string nombreDelArchivo, frase;
	cout<<"DIGITE EL NOMBRE DEL ARCHIVO: ";		getline(cin,nombreDelArchivo);
	archivo.open(nombreDelArchivo.c_str(),ios::out);		//ABRIENDO EL ARCHIVO, NOMBRE O UBICACI�N M�S NOMBRE
	if(archivo.fail()){
		cout<<"EL ARCHIVO NO SE PUDO CREAR . . ."<<endl<<endl;
		exit(1);							//FINALIZAR EL PROGRAMA EN CASO DE QUE NO FUNCIONE
	}
	cout<<"DIGITE EL TEXTO DEL ARCHIVO: ";		getline(cin,frase);
	archivo<<"HOLA �QUE TAL? MI NOMBRE ES URIEL";	//ESCRIBIR EN EL ARCHIVO
	archivo<<frase;
	archivo.close();							//CERRAR EL ARCHIVO
}
