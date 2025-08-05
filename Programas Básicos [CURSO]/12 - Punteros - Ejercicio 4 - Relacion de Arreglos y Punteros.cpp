/*
	CORRESPONTENCIAS ENTRE ARREGLOS Y PUNTEROS
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeros[] = {1,2,3,4,5};
	int *puntero_numeros;
	puntero_numeros = numeros;		//DIRECCIÓN DEL PRIMER ELEMENTO
	for(int i=0; i<5; i++){
		cout<<"POCISIÓN DE MEMORIA "<<numeros[i]<<" ES: "<<puntero_numeros++<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
