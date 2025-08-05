/*
	PEDIR AL USUARIO N N�MEROS, ALMACENARLOS EN UN ARREGLO DIN�MICO, POSTERIORMENTE ORDENAR
	LOS N�MEROS EN ORDEN ASCENDENTE Y MOSTRARLOS EN PANTALLA, USAR CUALQUIER METODO DE
	ORDENAMIENTO
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
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//VARIABLES GLOBALES
int numeroDeElementos, *puntero;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	ordenarArreglo(puntero,numeroDeElementos);
	mostrarArreglo(puntero,numeroDeElementos);
	delete[] puntero;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO DE ELEMENTOS: ";	cin>>numeroDeElementos;
	cout<<endl;
	puntero = new int[numeroDeElementos];
	for(int i=0; i<numeroDeElementos; i++){
		cout<<"DIGITE DATO ["<<i<<"]: ";	cin>>*(puntero+i);	//SINONIMO DE "puntero[i]"
	}
	cout<<endl;
}
void ordenarArreglo(int *p, int x){
	//ORDENAMIENTO CON METODO BURB�JA
	int auxiliar;
	for(int i=0; i<x; i++){
		for(int j=0; j<x-1; j++){
			if(*(p+j) > *(p+j+1)){	//ELEMENTO[J] > ELEMENTO[J+1]
				auxiliar = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = auxiliar;
			}
		}
	}
}
void mostrarArreglo(int *p, int x){
	cout<<"----- MOSTRANDO EL ARREGLO ORDENADO -----"<<endl<<endl;
	for(int i=0; i<x; i++){
		cout<<"ELEMENTO ["<<i<<"]: "<<*(p+i)<<endl;
	}
	cout<<endl;
}
