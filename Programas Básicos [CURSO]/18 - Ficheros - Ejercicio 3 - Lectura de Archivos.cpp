/*
	LECTURA DE UN ARCHIVO DE ESCRITORIO
	
	PARA LOCALES:					
	
	PARA DIRECCIONES ESPECIFICAS:		disco:\\carpeta\\archivo.extension
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
void leerArchivo();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	leerArchivo();
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void leerArchivo(){
	ifstream archivo;								//VARIABLE DE TIPO LECTURA DE ARCHIVO
	string texto;
	archivo.open("Ejercicio 3 y 4 Lectura.txt",ios::in);	//ABRIENDO EL ARCHIVO EN MODO LECTURA
	if(archivo.fail()){
		cout<<"NO SE PUDO ABRIR EL ARCHIVO . . .";
		exit(1);
	}
	while(!archivo.eof()){
		//MIENTRAS NO SEA EL FINAL DEL ARCHIVO
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	cout<<endl;
	archivo.close();							//CERRAMOS EL ARCHIVO
}
