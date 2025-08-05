/*
	PASO DE PARÁMETROS TIPO MATRIZ
	
	ELEVAR AL CUADRADO LA MATRIZ
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PLANTILLAS DE FUNCIONES
void mostrarMatriz(int m[][3],int,int);	//EL NÚMERO DE FILAS NO ES OBLIGATORIO
void mostrarMatrizElevadaAlCuadrado(int m[][3],int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	const int numeroDeFilas = 2;
	const int numeroDeColumnas = 3;
	int matriz[numeroDeFilas][numeroDeColumnas] = {{1,2,3},{4,5,6}};
	mostrarMatriz(matriz,numeroDeFilas,numeroDeColumnas);
	mostrarMatrizElevadaAlCuadrado(matriz,numeroDeFilas,numeroDeColumnas);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void mostrarMatriz(int m[][3], int filas, int columnas){
	cout<<"----- MOSTRANDO LA MATRIZ ORIGINAL -----"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<m[i][j]<<"   ";
		}
		cout<<endl<<endl;
	}
}
void mostrarMatrizElevadaAlCuadrado(int m[][3],int filas,int columnas){
	cout<<"----- MOSTRANDO LA MATRIZ ELEVADA AL CUADRADO -----"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			m[i][j] *= m[i][j];
			cout<<m[i][j]<<"   ";
		}
		cout<<endl<<endl;
	}
}
