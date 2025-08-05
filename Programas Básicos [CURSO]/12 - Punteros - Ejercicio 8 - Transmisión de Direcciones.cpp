/*
	TRANSMISIÓN DE DIRECCIONES
	 
	INTERCAMBIAR EL VALOR DE 2 VARIABLES
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
void intercambio(float *, float *);	//UTILIZAREMOS 2 DIRECCIONES DE MEMORIA

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	float numero1 = 20.8, numero2 = 6.78;
	cout<<"PRIMER NÚMERO: "<<numero1<<", SEGUNDO NÚMERO: "<<numero2<<endl<<endl;
	intercambio(&numero1,&numero2);	//MANDAMOS LA DIRECCION DE MEMORIA CON '&'
	cout<<"PRIMER NÚMERO: "<<numero1<<", SEGUNDO NÚMERO: "<<numero2<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void intercambio(float *direccion1, float *direccion2){
	float auxiliar;
	//INTERCAMBIO BÁSICO DE VALORES
	auxiliar = *direccion1;
	*direccion1 = *direccion2;
	*direccion2 = auxiliar;
}
