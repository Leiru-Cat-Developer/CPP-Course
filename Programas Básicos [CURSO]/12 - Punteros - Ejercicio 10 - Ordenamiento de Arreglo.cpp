/*
	PEDIR AL USUARIO N NÚMEROS, ALMACENARLOS EN UN ARREGLO DINÁMICO, POSTERIORMENTE ORDENAR
	LOS NÚMEROS EN ORDEN ASCENDENTE Y MOSTRARLOS EN PANTALLA, USAR CUALQUIER METODO DE
	ORDENAMIENTO
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
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//VARIABLES GLOBALES
int numeroDeElementos, *puntero;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	ordenarArreglo(puntero,numeroDeElementos);
	mostrarArreglo(puntero,numeroDeElementos);
	delete[] puntero;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO DE ELEMENTOS: ";	cin>>numeroDeElementos;
	cout<<endl;
	puntero = new int[numeroDeElementos];
	for(int i=0; i<numeroDeElementos; i++){
		cout<<"DIGITE DATO ["<<i<<"]: ";	cin>>*(puntero+i);	//SINONIMO DE "puntero[i]"
	}
	cout<<endl;
}
void ordenarArreglo(int *p, int x){
	//ORDENAMIENTO CON METODO BURBÚJA
	int auxiliar;
	for(int i=0; i<x; i++){
		for(int j=0; j<x-1; j++){
			if(*(p+j) > *(p+j+1)){	//ELEMENTO[J] > ELEMENTO[J+1]
				auxiliar = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = auxiliar;
			}
		}
	}
}
void mostrarArreglo(int *p, int x){
	cout<<"----- MOSTRANDO EL ARREGLO ORDENADO -----"<<endl<<endl;
	for(int i=0; i<x; i++){
		cout<<"ELEMENTO ["<<i<<"]: "<<*(p+i)<<endl;
	}
	cout<<endl;
}
