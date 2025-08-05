/*
	PUNTEROS A ESTRUCTURAS
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCTURAS
struct Persona{
	char nombre[100];
	int edad;
}p1, *punteroPersona = &p1;	//GUARDAMOS DIRECCIÓN DE LA PERSONA 1 EN EL PUNTERO

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	mostrarDatos(punteroPersona);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	//LOS PUNTEROS PIDEN LOS DATOS DE LAS ESTRUCTURAS CON "->" EN LUGAR DE "."
	cout<<"DIGITE EL NOMBRE: ";	cin.getline(punteroPersona->nombre,30,'\n');
	cout<<"DIGITE LA EDAD: ";	cin>>punteroPersona->edad;
	cout<<endl;
}
void mostrarDatos(Persona *puntero){
	cout<<"EL NOMBRE DE LA PERSONA ES '"<<puntero->nombre<<"' Y LA EDAD ES '"<<puntero->edad<<"' AÑO(S)"<<endl<<endl;
}
