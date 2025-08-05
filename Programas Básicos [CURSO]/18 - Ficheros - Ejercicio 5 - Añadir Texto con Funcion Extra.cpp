/*
	AÑADIR TEXTO A UN ARCHIVO QUE BUSQUEMOS
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
void leerEscribirArchivo();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	leerEscribirArchivo();
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void leerEscribirArchivo(){
	ofstream archivoEscribir;					//VARIABLE DE TIPO FICHERO AÑADIR
	ifstream archivoLeer;						//VARIABLE DE TIPO LECTURA DE ARCHIVO
	
	string direccion,textoLeer,textoEscribir;
	char respuesta = 'S';
	
	cout<<"DIGITA LA DIRECCIÓN DEL ARCHIVO: ";		getline(cin,direccion);		cout<<endl;
	archivoLeer.open(direccion.c_str(),ios::in);		//ABRIENDO EL ARCHIVO EN MODO LECTURA
	if(archivoLeer.fail()){
		//NO SE PUDO ABRIR EL ARCHIVO PARA MOSTRARLO EN PANTALLA
		cout<<"NO SE PUDO ABRIR EL ARCHIVO . . .";
		exit(1);
	}
	
	archivoEscribir.open(direccion.c_str(),ios::app);	//ABRIENDO EL ARCHIVO EN MODO AÑADIR
	if(archivoEscribir.fail()){
		//NO SE PUDO ABRIR EL ARCHIVO PARA PODERLE AÑADIR TEXTO
		cout<<"NO SE PUDO ABRIR EL ARCHIVO . . .";
		exit(1);
	}
	
	while(!archivoLeer.eof()){
		//MIENTRAS NO SEA EL FINAL DEL ARCHIVO MOSTRAMOS TODO EL TEXTO DEL ARCHIVO EN PANTALLA
		getline(archivoLeer,textoLeer);
		cout<<textoLeer<<endl;
	}
	cout<<endl;
	while((respuesta == 'S') || (respuesta == 's')){
		cout<<"¿DESEA AGREGAR UNA FRASE? [S/N]: ";		cin>>respuesta;	cout<<endl;
		if((respuesta == 'S') || (respuesta == 's')){
			fflush(stdin);								//LIMPIAMOS BUFFER
			cout<<"DIGITE LA FRASE QUE DESEA ESCRIBIR: ";	getline(cin,textoEscribir);
			archivoEscribir<<endl<<textoEscribir<<endl;
		}
		cout<<endl;
	}
	archivoEscribir.close();							//CERRAMOS EL ARCHIVO
	archivoLeer.close();							//CERRAMOS EL ARCHIVO
}
