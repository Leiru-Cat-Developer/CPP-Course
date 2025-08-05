/*
	ASIGNACI�N DINAMICA DE ARREGLOS
	
	new: RESERVA EL N�MERO DE BYTES SOLICITADO POR LA DECLARACI�N
	delete: LIBERA UN BLOQUE DE BYTES RESERVADO CON ANTERIORIDAD
	
	EJEMPLO: PEDIR AL USUARIO N CALIFICACIONES Y ALMACENARLOS EN UN ARREGLO DINAMICO
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirNotas();
void mostrarNotas();

//VARIABLES GLOBALES
int numeroDeCalificaciones, *punteroDeVectorDinamicoCalificaciones;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirNotas();
	mostrarNotas();
	delete[] punteroDeVectorDinamicoCalificaciones;	//LIBERANDO MEMORIA RESERVADA
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirNotas(){
	cout<<"DIGITE EL N�MERO DE CALIFICACIONES: ";	cin>>numeroDeCalificaciones;
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
