/*
	REALICE UN PROGRAMA QUE LEA UNA MATRIZ DIN�MICA DE N X M, Y CREE SU MATRIZ
	TRANSPUESTA, LA MATRIZ TRANSPUESTA ES AQUELLA EN LA QUE LA COLUMNA [i] ERA LA FILA [i]
	DE LA MATRIZ ORIGINAL.
	
	1 2 3			1 4 7
	4 5 6	->		2 5 8
	7 8 9			3 6 9
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
void mostrarMatrizTranspuesta(int **,int,int);

//VARIABLES GLOBALES
int **punteroMatriz, filas = 0, columnas = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	mostrarMatrizTranspuesta(punteroMatriz,filas,columnas);
	//LIBERAR MEMORIA DE LA MATRIZ
	for(int i=0; i<filas; i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	do{
		cout<<"DIGITE EL N�MERO DE FILAS Y COLUMNAS: ";	cin>>filas>>columnas;	cout<<endl;
		if(filas != columnas){
			cout<<"LAS MATRICES TRANSPUESTAS DEBEN SER SIMETRICAS, INGRESE DATOS CORRECTOS . . ."<<endl<<endl;
			system("pause");
			system("cls");	
		}else if((filas <= 0)||(columnas <= 0)){
			cout<<"DIGITE VALORES CORRECTOS PARA FILAS Y COLUMNAS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}else{
			//RESERVACI�N DE MEMORIA PARA LA MATRIZ 1
			punteroMatriz = new int*[filas];
			for(int i=0; i<filas; i++){
				punteroMatriz[i] = new int[columnas];
			}
			cout<<"DIGITE LOS ELEMENTOS DE LA MATRIZ"<<endl<<endl;
			for(int i=0; i<filas; i++){
				for(int j=0; j<columnas; j++){
					cout<<"DIGITE UN N�MERO ["<<i<<"]["<<j<<"]: ";	cin>>*(*(punteroMatriz+i)+j);
				}
			}
			cout<<endl;
			system("pause");
			cout<<endl;
		}
	}while((filas != columnas)||(filas <= 0)||(columnas <= 0));
}
void mostrarMatrizTranspuesta(int **matriz, int fil, int col){
	cout<<"----- MOSTRANDO LA MATRIZ ORIGINAL -----"<<endl<<endl;
	for(int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<<*(*(matriz+i)+j)<<"            ";
		}
		cout<<endl<<endl;
	}
	cout<<"----- MOSTRANDO LA MATRIZ TRANSPUESTA -----"<<endl<<endl;
	for(int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<<*(*(matriz+j)+i)<<"            ";
		}
		cout<<endl<<endl;
	}
}
