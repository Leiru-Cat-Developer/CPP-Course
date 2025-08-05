/*
	FACTORIAL DE UN NÚMERO CON RECURSIVIDAD DE FUNCIONES
	
	FACTORIAL(N) = 1			  , si n = 0	-> CASO BASE
				n*FACTORIAL(n-1) , si n > 0	-> CASO GENERAL
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

int factorial(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numero = 3;
	cout<<"EL FACTORIAL DE "<<numero<<" ES: "<<factorial(numero)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int factorial(int x){
	if(x == 0){
		//CASO BASE
		x = 1;
	}else{
		//CASO GENERAL
		x = x * factorial(x-1);
	}
	return x;
}
