/*
	ASIGNACIÓN DINAMICA DE ARREGLOS
	
	new: RESERVA EL NÚMERO DE BYTES SOLICITADO POR LA DECLARACIÓN
	delete: LIBERA UN BLOQUE DE BYTES RESERVADO CON ANTERIORIDAD
	
	EJEMPLO: PEDIR AL USUARIO N CALIFICACIONES Y ALMACENARLOS EN UN ARREGLO DINAMICO
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirNotas();
void mostrarNotas();

//VARIABLES GLOBALES
int numeroDeCalificaciones, *punteroDeVectorDinamicoCalificaciones;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirNotas();
	mostrarNotas();
	delete[] punteroDeVectorDinamicoCalificaciones;	//LIBERANDO MEMORIA RESERVADA
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirNotas(){
	cout<<"DIGITE EL NÚMERO DE CALIFICACIONES: ";	cin>>numeroDeCalificaciones;
	cout<<endl;
	punteroDeVectorDinamicoCalificaciones = new int[numeroDeCalificaciones];		//RESERVANDO ARREGLO DINAMICO "puntero = new int[variableCantidadDeEspacios]"
	for(int i=0; i<numeroDeCalificaciones; i++){
		cout<<"INGRESE NOTA ["<<i<<"]: ";	cin>>punteroDeVectorDinamicoCalificaciones[i];
	}
	cout<<endl;
}
void mostrarNotas(){
	cout<<"----- MOSTRANDO LAS NOTAS DEL USUARIO -----"<<endl<<endl;
	for(int i=0; i<numeroDeCalificaciones; i++){
		cout<<"["<<i<<"]: "<<punteroDeVectorDinamicoCalificaciones[i]<<endl;
	}
	cout<<endl;
}
