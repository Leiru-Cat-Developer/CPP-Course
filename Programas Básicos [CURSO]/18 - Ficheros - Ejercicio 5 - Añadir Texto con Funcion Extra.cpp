/*
	A�ADIR TEXTO A UN ARCHIVO QUE BUSQUEMOS
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
void leerEscribirArchivo();

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	leerEscribirArchivo();
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void leerEscribirArchivo(){
	ofstream archivoEscribir;					//VARIABLE DE TIPO FICHERO A�ADIR
	ifstream archivoLeer;						//VARIABLE DE TIPO LECTURA DE ARCHIVO
	
	string direccion,textoLeer,textoEscribir;
	char respuesta = 'S';
	
	cout<<"DIGITA LA DIRECCI�N DEL ARCHIVO: ";		getline(cin,direccion);		cout<<endl;
	archivoLeer.open(direccion.c_str(),ios::in);		//ABRIENDO EL ARCHIVO EN MODO LECTURA
	if(archivoLeer.fail()){
		//NO SE PUDO ABRIR EL ARCHIVO PARA MOSTRARLO EN PANTALLA
		cout<<"NO SE PUDO ABRIR EL ARCHIVO . . .";
		exit(1);
	}
	
	archivoEscribir.open(direccion.c_str(),ios::app);	//ABRIENDO EL ARCHIVO EN MODO A�ADIR
	if(archivoEscribir.fail()){
		//NO SE PUDO ABRIR EL ARCHIVO PARA PODERLE A�ADIR TEXTO
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
		cout<<"�DESEA AGREGAR UNA FRASE? [S/N]: ";		cin>>respuesta;	cout<<endl;
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
