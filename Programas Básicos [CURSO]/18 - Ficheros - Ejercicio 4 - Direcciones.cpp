/*
	REALICE UN PROGRAMA QUE PIDA AL USUARIO EL NOMBRE O UBICACION DE UN FICHERO DE TEXTO Y,
	A CONTINUACIÓN DE LECTURA A TODO EL FICHERO
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
void leerArchivo();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	leerArchivo();
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void leerArchivo(){
	ifstream archivo;							//VARIABLE DE TIPO LECTURA DE ARCHIVO
	string direccion,texto;
	cout<<"DIGITA LA DIRECCIÓN DEL ARCHIVO: ";		getline(cin,direccion);		cout<<endl;
	archivo.open(direccion.c_str(),ios::in);		//ABRIENDO EL ARCHIVO EN MODO LECTURA
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
