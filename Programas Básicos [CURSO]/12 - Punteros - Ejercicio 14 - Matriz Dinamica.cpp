/*
	MATRIZ DIN�MICA
	
	RELLENAR UNA MATRIZ DE 		N X M	 Y MOSTRAR SU CONTENIDO
	
	**PUNTERO_MATRIZ	->	*PUNTERO_FILA -> [INT] [INT] [INT]
						*PUNTERO_FILA -> [INT] [INT] [INT]
						*PUNTERO_FILA -> [INT] [INT] [INT]
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
void mostrarMatriz(int **,int,int);

//VARIABLES GLOBALES
int **puntero_puntero_matriz;		//UN PUNTERO SE�ALA A LAS FILAS Y OTRO A LAS COLUMNAS
int filas = 0, columnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE FILAS Y EL N�MERO DE COLUMNAS: ";	cin>>filas>>columnas;	cout<<endl;
	//RESERVAR MEMORIA DE MATRIZ CON PUNTEROS
	puntero_puntero_matriz = new int*[filas];			//RESERVAMOS MEMORIA CON PUNTERO FILAS
	for(int i=0; i<filas; i++){
		puntero_puntero_matriz[i] = new int[columnas];	//RESERVAMOS MEMORIA PARA COLUMNAS
	}
	cout<<"DIGITE LOS ELEMENTOS DE LA MATRIZ"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE UN N�MERO ["<<i<<"]["<<j<<"]: ";	cin>>*(*(puntero_puntero_matriz+i)+j);
		}
	}
	cout<<endl;
}
void mostrarMatriz(int **ppmatriz,int nFil, int nCol){
	cout<<"----- MOSTRANDO LOS N�MEROS DE LA MATRIZ -----"<<endl<<endl;
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
