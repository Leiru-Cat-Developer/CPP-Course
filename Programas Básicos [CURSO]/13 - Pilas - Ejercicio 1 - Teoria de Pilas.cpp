/*
	PILAS - INSERTAR ELEMENTOS EN UNA PILA
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCTURAS
struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//PROTOTIPOS DE FUNCIONES
void agregarPila(Nodo *&,int);
void quitarPila(Nodo *&,int &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	Nodo *pila = NULL;				//PRIMER LUGAR ES NULL
	int dato = 0;
	cout<<"DIGITE 1 NÚMERO: ";	cin>>dato;		cout<<endl;
	agregarPila(pila,dato);
	cout<<"DIGITE 2 NÚMERO: ";	cin>>dato;		cout<<endl;
	agregarPila(pila,dato);
	cout<<"PROCEDEMOS A SACAR UN ELEMENTO DE LA PILA ASI QUE, ";	system("pause");	cout<<endl;
	while(pila != NULL){	//MIENTRAS NO SEA EL FINAL DE LA PILA
		quitarPila(pila,dato);
		if(pila != NULL){
			cout<<dato<<"   ,   ";
		}else{
			cout<<dato<<"   .   ";
		}
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;		//RELLENAR LA PILA
	pila = nuevo_nodo;
	cout<<"ELEMENTO AGREGADO A LA PILA CORRECTAMENTE . . ."<<endl<<endl;
}
void quitarPila(Nodo *&pila, int &n){
	Nodo *auxiliar = pila;
	n = auxiliar->dato;
	pila = auxiliar->siguiente;
	delete auxiliar;
}
