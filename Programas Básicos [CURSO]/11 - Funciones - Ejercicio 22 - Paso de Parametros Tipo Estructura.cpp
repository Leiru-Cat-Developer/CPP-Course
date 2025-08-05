/*
	PASO DE PARAMETROS TIPO ESTRUCTURA
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//DEFINICI�N DE ESTRUCTURAS
struct Persona{
	char nombre[100];
	int edad;
}persona1;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void mostrarDatos(Persona);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	mostrarDatos(persona1);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE SU NOMBRE: ";	cin.getline(persona1.nombre,100,'\n');
	cout<<"DIGITE SU EDAD: ";	cin>>persona1.edad;
	cout<<endl;
}
void mostrarDatos(Persona p){
	cout<<"EL NOMBRE ES: "<<p.nombre<<endl;
	cout<<"LA EDAD ES: "<<p.edad<<endl<<endl;
}
