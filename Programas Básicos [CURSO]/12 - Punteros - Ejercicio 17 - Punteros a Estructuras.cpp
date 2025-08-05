/*
	PUNTEROS A ESTRUCTURAS
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCTURAS
struct Persona{
	char nombre[100];
	int edad;
}p1, *punteroPersona = &p1;	//GUARDAMOS DIRECCI�N DE LA PERSONA 1 EN EL PUNTERO

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	mostrarDatos(punteroPersona);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	//LOS PUNTEROS PIDEN LOS DATOS DE LAS ESTRUCTURAS CON "->" EN LUGAR DE "."
	cout<<"DIGITE EL NOMBRE: ";	cin.getline(punteroPersona->nombre,30,'\n');
	cout<<"DIGITE LA EDAD: ";	cin>>punteroPersona->edad;
	cout<<endl;
}
void mostrarDatos(Persona *puntero){
	cout<<"EL NOMBRE DE LA PERSONA ES '"<<puntero->nombre<<"' Y LA EDAD ES '"<<puntero->edad<<"' A�O(S)"<<endl<<endl;
}
