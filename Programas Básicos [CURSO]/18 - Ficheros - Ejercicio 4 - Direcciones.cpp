/*
	REALICE UN PROGRAMA QUE PIDA AL USUARIO EL NOMBRE O UBICACION DE UN FICHERO DE TEXTO Y,
	A CONTINUACI�N DE LECTURA A TODO EL FICHERO
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
	ifstream archivo;							//VARIABLE DE TIPO LECTURA DE ARCHIVO
	string direccion,texto;
	cout<<"DIGITA LA DIRECCI�N DEL ARCHIVO: ";		getline(cin,direccion);		cout<<endl;
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
