/*
	REALICE UN PROGRAMA QUE PIDA AL USUARIO EL NOMBRE DE UN FICHERO DE TEXTO, Y A CONTINUACI�N PERMITA
	ALMACENAR AL USUARIO TANTAS FRASES COMO EL USUARIO LO DESEE
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
	return 0;
}

//DEFINICI�N DE FUNCIONES
void escribir(){
	ofstream archivo;
	string nombreDelArchivo,frases;
	char respuesta = 'S';
	cout<<"DIGITE EL NOMBRE DEL ARCHIVO Y LA EXTENSI�N: ";	getline(cin,nombreDelArchivo);	cout<<endl;
	archivo.open(nombreDelArchivo.c_str(),ios::out);		//ABRIENDO EL ARCHIVO, NOMBRE O UBICACI�N M�S NOMBRE
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
		cout<<"�DESEA INGRESAR ALGUNA OTRA FRASE? [S/N]: ";		cin>>respuesta;		cout<<endl;
		if((respuesta != 'S')||(respuesta != 's')){
			system("pause");
			system("cls");
		}
	}
	archivo.close();								//CERRAR EL ARCHIVO
}
