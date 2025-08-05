/*
	MATRIZ DINÁMICA
	
	RELLENAR UNA MATRIZ DE 		N X M	 Y MOSTRAR SU CONTENIDO
	
	**PUNTERO_MATRIZ	->	*PUNTERO_FILA -> [INT] [INT] [INT]
						*PUNTERO_FILA -> [INT] [INT] [INT]
						*PUNTERO_FILA -> [INT] [INT] [INT]
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
void mostrarMatriz(int **,int,int);

//VARIABLES GLOBALES
int **puntero_puntero_matriz;		//UN PUNTERO SEÑALA A LAS FILAS Y OTRO A LAS COLUMNAS
int filas = 0, columnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	mostrarMatriz(puntero_puntero_matriz,filas,columnas);
	//ELIMINAR MEMORIA QUE USAMOS EN LA MATRIZ
	for(int i=0; i<filas; i++){
		delete[] puntero_puntero_matriz[i];
	}
	delete[] puntero_puntero_matriz;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO DE FILAS Y EL NÚMERO DE COLUMNAS: ";	cin>>filas>>columnas;	cout<<endl;
	//RESERVAR MEMORIA DE MATRIZ CON PUNTEROS
	puntero_puntero_matriz = new int*[filas];			//RESERVAMOS MEMORIA CON PUNTERO FILAS
	for(int i=0; i<filas; i++){
		puntero_puntero_matriz[i] = new int[columnas];	//RESERVAMOS MEMORIA PARA COLUMNAS
	}
	cout<<"DIGITE LOS ELEMENTOS DE LA MATRIZ"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE UN NÚMERO ["<<i<<"]["<<j<<"]: ";	cin>>*(*(puntero_puntero_matriz+i)+j);
		}
	}
	cout<<endl;
}
void mostrarMatriz(int **ppmatriz,int nFil, int nCol){
	cout<<"----- MOSTRANDO LOS NÚMEROS DE LA MATRIZ -----"<<endl<<endl;
	for(int i=0; i<nFil; i++){
		for(int j=0; j<nCol; j++){
			cout<<*(*(puntero_puntero_matriz+i)+j)<<"          ";
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	cout<<"----- MOSTRANDO LAS DIRECCIONES DE MATRIZ -----"<<endl<<endl;
	for(int i=0; i<nFil; i++){
		for(int j=0; j<nCol; j++){
			cout<<((puntero_puntero_matriz+i)+j)<<"          ";
		}
		cout<<endl<<endl;
	}
	cout<<endl;
}
