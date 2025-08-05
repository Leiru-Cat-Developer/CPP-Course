/*
	PUNTEROS
	
	&n = LA DIRECCIÓN DE N
	*n = LA VARIABLE CUYA DIRECCIÓN ESTÁ ALMACENADA EN "n"
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
	int numero = 20, *puntero_numero;
	puntero_numero = &numero;								//ASIGNACIÓN DE POSICIÓN DE MEMORIA AL PUNTERO
	cout<<"NÚMERO: "<<numero<<endl;							//IMPRESIÓN COMÚN
	cout<<"DIRECCIÓN DE MEMORIA: "<<&numero<<endl;				//DIRECCIÓN DE MEMORIA EXACTO DONDE SE GUARDA LA VARIABLE
	cout<<"PUNTERO NÚMERO: "<<*puntero_numero<<endl;				//IMPRESIÓN COMÚN CON PUNTERO
	cout<<"PUNTERO DIRECCIÓN DE MEMORIA: "<<puntero_numero<<endl;	//DIRECCIÓN DE MEMORIA EXACTO CON PUNTEROS
	cout<<endl;
	/*
		*PUNTERO = VALOR ASIGNADO DE LA VARIABLE
		PUNTERO  = DIRECCIÓN DE MEMORIA ASIGNADA PREVIAMENTE CON "puntero = &variable"
	*/
	system("pause");
	return 0;
}
