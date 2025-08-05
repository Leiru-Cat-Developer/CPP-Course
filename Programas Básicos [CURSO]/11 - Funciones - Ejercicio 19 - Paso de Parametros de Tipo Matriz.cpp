/*
	PASO DE PAR�METROS TIPO MATRIZ
	
	ELEVAR AL CUADRADO LA MATRIZ
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PLANTILLAS DE FUNCIONES
void mostrarMatriz(int m[][3],int,int);	//EL N�MERO DE FILAS NO ES OBLIGATORIO
void mostrarMatrizElevadaAlCuadrado(int m[][3],int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	const int numeroDeFilas = 2;
	const int numeroDeColumnas = 3;
	int matriz[numeroDeFilas][numeroDeColumnas] = {{1,2,3},{4,5,6}};
	mostrarMatriz(matriz,numeroDeFilas,numeroDeColumnas);
	mostrarMatrizElevadaAlCuadrado(matriz,numeroDeFilas,numeroDeColumnas);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
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
