/*
	REALIZE UNA FUNCIÓN QUE DADA UNA MATRIZ Y UN NÚMERO DE FILA DE LA MATRIZ, DEVUELVA
	EL MENOR DE LOS DATOS ALMACENADOS DE DICHA FILA
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
void pedirDatos();
int comprobarMenorElementoDeMatrizPorFilaEspecifica(int matriz[][1000],int,int);

//VARIABLES GLOBALES
int matrizPrincipal[1000][1000], numeroDeFilas = 0, numeroDeColumnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<"EL MENOR ELEMENTO ES: "<<comprobarMenorElementoDeMatrizPorFilaEspecifica(matrizPrincipal,numeroDeFilas,numeroDeColumnas);
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO DE FILAS Y NÚMERO DE COLUMNAS: ";		cin>>numeroDeFilas>>numeroDeColumnas;
	cout<<endl;
	for(int i=0; i<numeroDeFilas; i++){
		for(int j=0; j<numeroDeColumnas; j++){
			cout<<"DIGITE EL DATO ["<<i<<"]["<<j<<"]: ";			cin>>matrizPrincipal[i][j];
		}
	}
	cout<<endl;
}
int comprobarMenorElementoDeMatrizPorFilaEspecifica(int matriz[][1000],int x,int y){
	int fila = 0, menor = 999999;
	cout<<"DIGITE EL NÚMERO DE FILA QUE DESEA COMPROBAR: ";		cin>>fila;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			if(i == fila){
				if(matriz[i][j] < menor){
					menor = matriz[i][j];
				}
			}
		}
	}
	return menor;
}
