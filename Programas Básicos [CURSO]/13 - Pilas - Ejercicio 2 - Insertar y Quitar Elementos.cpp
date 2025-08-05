/*
	HACER UN PROGRAMA PARA AGREGAR N�MEROS ENTEROS A UNA PILA, HASTA QUE EL USUARIO LO DECIDA,
	DESPU�S MOSTRAR TODOS LOS N�MEROS INTRODUCIDOS EN LA PILA
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	Nodo *pila = NULL;
	int dato = 0;
	char respuesta;
	do{
		cout<<"DIGITA UN N�MERO: ";	cin>>dato;	cout<<endl;
		agregarPila(pila,dato);
		cout<<"�DESEA AGREGAR OTRO ELEMENTO? [S/N]: ";	cin>>respuesta;
		system("cls");
	}while((respuesta == 'S')||(respuesta == 's'));
	cout<<"PROCEDEMOS A SACAR TODOS LOS ELEMENTOS DE LA PILA AS� QUE, ";	system("pause");	cout<<endl;
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

//DEFINICI�N DE FUNCIONES
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
