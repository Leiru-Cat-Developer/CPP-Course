/*
	ESCRIBA UNA FUNCIÓN RECURSIVA QUE CALCULE UN NÚMERO ELEVADO A UNA POTENCIA ENTERA MAYOR O IGUAL
	QUE CERO: X ^ Y
	
	POTENCIA (X,Y) = X					, Y = 1
				  X*POTENCIA(X,Y-1)		, Y > 1
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
int potencia(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int base = 0, exponente = 0;
	cout<<"DIGITE LA BASE Y EL EXPONENTE: ";	cin>>base>>exponente;
	cout<<"LA POTENCIA "<<base<<" ELEVADO A "<<exponente<<": "<<potencia(base,exponente)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
int potencia(int x, int y){
	int pot;
	if(y == 1){
		//CASO BASE
		pot = x;
	}else{
		//CASO GENERAL
		pot = x * potencia(x,y-1);
	}
	return pot;
}
