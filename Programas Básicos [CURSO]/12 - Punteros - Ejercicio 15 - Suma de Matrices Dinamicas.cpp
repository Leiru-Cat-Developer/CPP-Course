/*
	REALIZA UN PROGRAMA QUE CALCULE LA SUMA DE 2 MATRICES DIN�MICAS
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void sumarMatrices(int **, int **,int,int);
void mostrarMatriz(int **,int,int);

//VARIABLES GLOBALES
int **puntero_matriz1, **puntero_matriz2, filas = 0, columnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,filas,columnas);
	mostrarMatriz(puntero_matriz1,filas,columnas);
	//LIBERAR MEMORIA DE LAS 2 MATRICES
	for(int i=0; i<filas; i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	for(int i=0; i<filas; i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE FILAS Y DE COLUMNAS: ";	cin>>filas>>columnas;	cout<<endl;
	//RESERVANDO MEMORIA PARA LA PRIMERA MATRIZ
	puntero_matriz1 = new int*[filas];
	for(int i=0; i<filas; i++){
		puntero_matriz1[i] = new int[columnas];
	}
	cout<<"DIGITE LOS ELEMENTOS DE LA PRIMER MATRIZ"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE UN N�MERO ["<<i<<"]["<<j<<"]: ";	cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	cout<<endl;
	//RESERVANDO MEMORIA PARA LA SEGUNDA MATRIZ
	puntero_matriz2 = new int*[filas];
	for(int i=0; i<filas; i++){
		puntero_matriz2[i] = new int[columnas];
	}
	cout<<"DIGITE LOS ELEMENTOS DE LA SEGUNDA MATRIZ"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE UN N�MERO ["<<i<<"]["<<j<<"]: ";	cin>>*(*(puntero_matriz2+i)+j);
		}
	}
	cout<<endl;
}
void sumarMatrices(int **m1, int **m2, int f, int c){
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			*(*(m1+i)+j) += *(*(m2+i)+j);
		}
	}
}
void mostrarMatriz(int **m1, int f, int c){
	cout<<"----- MOSTRAR MATRIZ DE N�MEROS SUMADA -----"<<endl<<endl;
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<*(*(m1+i)+j)<<"          ";
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	cout<<"----- MOSTRAR MATRIZ DE POCISIONES DE N�MEROS SUMADA -----"<<endl<<endl;
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<((m1+i)+j)<<"          ";
		}
		cout<<endl<<endl;
	}
	cout<<endl;
}
