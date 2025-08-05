/*
	TRANSMISI�N DE DIRECCIONES
	 
	INTERCAMBIAR EL VALOR DE 2 VARIABLES
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
void intercambio(float *, float *);	//UTILIZAREMOS 2 DIRECCIONES DE MEMORIA

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	float numero1 = 20.8, numero2 = 6.78;
	cout<<"PRIMER N�MERO: "<<numero1<<", SEGUNDO N�MERO: "<<numero2<<endl<<endl;
	intercambio(&numero1,&numero2);	//MANDAMOS LA DIRECCION DE MEMORIA CON '&'
	cout<<"PRIMER N�MERO: "<<numero1<<", SEGUNDO N�MERO: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void intercambio(float *direccion1, float *direccion2){
	float auxiliar;
	//INTERCAMBIO B�SICO DE VALORES
	auxiliar = *direccion1;
	*direccion1 = *direccion2;
	*direccion2 = auxiliar;
}
