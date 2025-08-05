/*
	DETERMINAR SI UNA MATRIZ ES SIMETRICA O NO
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
void comprobacionDeSimetriaDeMatriz(int matriz[][100], int, int);	//COLOCAMOS N�MERO M�XIMO DE COLUMNAS

//VARIABLES GLOBALES
int matrizPrincipal[100][100], numeroDeFilas = 0, numeroDeColumnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	comprobacionDeSimetriaDeMatriz(matrizPrincipal,numeroDeFilas,numeroDeColumnas);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE FILAS: ";	cin>>numeroDeFilas;
	cout<<"DIGITE EL N�MERO DE COLUMNAS: ";	cin>>numeroDeColumnas;
	cout<<endl;
	for(int i=0; i<numeroDeFilas; i++){
		for(int j=0; j<numeroDeColumnas; j++){
			cout<<"DIGITE EL ESPACIO ["<<i<<"]["<<j<<"]: ";	cin>>matrizPrincipal[i][j];
		}
	}
	cout<<endl;
}
void comprobacionDeSimetriaDeMatriz(int matriz[][100], int x, int y){
	int contador = 0;
	if(x == y){
		for(int i=0; i<x; i++){
			for(int j=0; j<y; j++){
				if(matriz[i][j] == matriz[j][i]){
					contador++;
				}
				cout<<matriz[i][j]<<"    ";
			}
			cout<<endl;
		}	
	}
	cout<<endl;
	if(contador == (x*y)){
		cout<<"LA MATRIZ 'SI' ES SIMETRICA . . ."<<endl<<endl;
	}else{
		cout<<"LA MATRIZ 'NO' ES SIMETRICA . . ."<<endl<<endl;	
	}
}
