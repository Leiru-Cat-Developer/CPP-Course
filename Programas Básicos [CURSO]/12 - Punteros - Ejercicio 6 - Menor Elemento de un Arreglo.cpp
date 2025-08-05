/*
	RELLENAR UN ARREGLO CON N NÚMEROS, POSTERIORMENTE UTILIZANDO PUNTEROS DETERMINAR EL MENOR
	ELEMENTO DEL ARREGLO
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
	int cantidadDeNumeros = 0;
	while(cantidadDeNumeros <= 0){
		cout<<"DIGITE LA CANTIDAD DE NÚMEROS QUE DESEA INGRESAR: ";	cin>>cantidadDeNumeros;
		if(cantidadDeNumeros <= 0){
			cout<<endl;
			cout<<"DIGITE UNA CANTIDAD DE NÚMEROS VALIDA . . .";
			cout<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	int vectorNumeros[cantidadDeNumeros], *punteroDeVector, menor = 999999;
	for(int i=0; i<cantidadDeNumeros; i++){
		cout<<"DIGITE EL NÚMERO ["<<i<<"]: ";	cin>>vectorNumeros[i];
	}
	cout<<endl;
	punteroDeVector = vectorNumeros;	//IGUALANDO A LA POCISIÓN INICIAL DEL VECTOR
	for(int i=0; i<cantidadDeNumeros; i++){
		if(*punteroDeVector < menor){
			menor = *punteroDeVector;
		}
		punteroDeVector++;
	}
	cout<<"EL MENOR ELEMENTO DEL VECTOR ES: "<<menor<<endl<<endl;
	system("pause");
	return 0;
}
