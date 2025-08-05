/*
	PASO DE PARAMETROS TIPO ESTRUCTURA
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//DEFINICIÓN DE ESTRUCTURAS
struct Persona{
	char nombre[100];
	int edad;
}persona1;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void mostrarDatos(Persona);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	mostrarDatos(persona1);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE SU NOMBRE: ";	cin.getline(persona1.nombre,100,'\n');
	cout<<"DIGITE SU EDAD: ";	cin>>persona1.edad;
	cout<<endl;
}
void mostrarDatos(Persona p){
	cout<<"EL NOMBRE ES: "<<p.nombre<<endl;
	cout<<"LA EDAD ES: "<<p.edad<<endl<<endl;
}
