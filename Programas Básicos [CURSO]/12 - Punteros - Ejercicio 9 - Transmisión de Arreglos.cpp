/*
	TRANSMISIÓN DE ARREGLOS
	
	HALLAR EL MÁXIMO ELEMENTO DE UN ARREGLO
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
int hallarMaximo(int *,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	const int numeroDeElementos = 5;
	int numeros[numeroDeElementos] = {3,5,2,8,1};
	cout<<"EL MAYOR ELEMENTO ES: "<<hallarMaximo(numeros,numeroDeElementos)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int hallarMaximo(int *punteroVector,int x){
	int maximo = 0;
	for(int i=0; i<x; i++){
		if(*(punteroVector+i)>maximo){
			maximo = *(punteroVector+i);
		}
	}
	return maximo;
}
