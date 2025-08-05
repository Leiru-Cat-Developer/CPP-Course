/*
	REALIZE UNA FUNCI�N QUE DADA UNA MATRIZ Y UN N�MERO DE FILA DE LA MATRIZ, DEVUELVA
	EL MENOR DE LOS DATOS ALMACENADOS DE DICHA FILA
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
int comprobarMenorElementoDeMatrizPorFilaEspecifica(int matriz[][1000],int,int);

//VARIABLES GLOBALES
int matrizPrincipal[1000][1000], numeroDeFilas = 0, numeroDeColumnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<"EL MENOR ELEMENTO ES: "<<comprobarMenorElementoDeMatrizPorFilaEspecifica(matrizPrincipal,numeroDeFilas,numeroDeColumnas);
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE FILAS Y N�MERO DE COLUMNAS: ";		cin>>numeroDeFilas>>numeroDeColumnas;
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
	cout<<"DIGITE EL N�MERO DE FILA QUE DESEA COMPROBAR: ";		cin>>fila;
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
