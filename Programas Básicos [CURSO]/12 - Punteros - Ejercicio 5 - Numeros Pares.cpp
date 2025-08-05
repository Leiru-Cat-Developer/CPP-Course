/*
	RELLENAR UN ARREGLO DE 10 NÚMEROS, POSTERIORMENTE UTILIZANDO PUNTEROS INDICAR
	CUALES SON NÚMEROS PARES Y SU POCISIÓN EN MEMORIA
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
	int numeros[10], *puntero_numeros;
	for(int i=0; i<10; i++){
		cout<<"DIGITE EL NÚMERO ["<<i<<"]: ";	cin>>numeros[i];
	}
	cout<<endl;
	puntero_numeros = numeros;	//POSICIÓN DE MEMORIA DEL VECTOR
	for(int i=0; i<10; i++){
		if(*puntero_numeros%2 == 0){
			cout<<"EL NÚMERO "<<*puntero_numeros<<" ES PAR Y LA POCISIÓN ES: "<<puntero_numeros<<endl;
		}
		puntero_numeros++;
	}
	cout<<endl;
	system("pause");
	return 0;
}
