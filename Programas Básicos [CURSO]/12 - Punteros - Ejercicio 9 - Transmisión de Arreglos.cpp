/*
	TRANSMISI�N DE ARREGLOS
	
	HALLAR EL M�XIMO ELEMENTO DE UN ARREGLO
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
int hallarMaximo(int *,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	const int numeroDeElementos = 5;
	int numeros[numeroDeElementos] = {3,5,2,8,1};
	cout<<"EL MAYOR ELEMENTO ES: "<<hallarMaximo(numeros,numeroDeElementos)<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
int hallarMaximo(int *punteroVector,int x){
	int maximo = 0;
	for(int i=0; i<x; i++){
		if(*(punteroVector+i)>maximo){
			maximo = *(punteroVector+i);
		}
	}
	return maximo;
}
