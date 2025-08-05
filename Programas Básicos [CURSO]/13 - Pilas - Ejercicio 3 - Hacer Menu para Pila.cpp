/*
	HACER UN PROGRAMA EN C++ QUE UTILIZANDO PILAS QUE CONTENGA EL SIGUIENTE MENU:
	
	- INSERTAR UN CAR�CTER A LA PILA
	- MOSTRAR TODOS LOS ELEMENTOS DE LA PILA
	- SALIR
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
	char dato;
	Nodo *siguiente;	
};

//PROTOTIPOS DE FUNCIONES
void mostrarMenu();
void agregarPila(Nodo *&,char);
void quitarPila(Nodo *&,char &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	Nodo *pila = NULL;
	int eleccion = 0;
	char dato;
	do{
		mostrarMenu();
		cout<<"DIGITE LA OPCI�N: ";	cin>>eleccion;	cout<<endl;
		switch(eleccion){
			case 1:	cout<<"DIGITE UN CAR�CTER: ";	cin>>dato;	cout<<endl;	agregarPila(pila,dato);
				break;
			case 2:	cout<<"MOSTRANDO TODA LA PILA"<<endl<<endl;
					while(pila != NULL){	//MIENTRAS NO SEA EL FINAL DE LA PILA
						quitarPila(pila,dato);
						if(pila != NULL){
							cout<<dato<<"   ,   ";
						}else{
							cout<<dato<<"   .   ";
						}
					}
				break;
			case 3:	cout<<"SALIENDO DEL PROGRAMA . . ."<<endl<<endl;
				break;
			default: cout<<"LA OPCI�N QUE DIGITO NO EXISTE, INTENTE DE NUEVO . . .";	cout<<endl<<endl;
				break;
		}
		system("pause");
		system("cls");	
	}while(eleccion != 3);
	return 0;
}

//DEFINICI�N DE FUNCIONES
void mostrarMenu(){
	cout<<"\t"<<"ELIGA UNA OPCI�N"<<endl<<endl;
	cout<<"1. INSERTAR UN CAR�CTER A LA PILA"<<endl;
	cout<<"2. MOSTRAR TODOS LOS ELEMENTOS DE LA PILA"<<endl;
	cout<<"3. SALIR"<<endl<<endl;
}
void agregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;		//RELLENAR LA PILA
	pila = nuevo_nodo;
	cout<<"ELEMENTO AGREGADO A LA PILA CORRECTAMENTE . . ."<<endl<<endl;
}
void quitarPila(Nodo *&pila, char &n){
	Nodo *auxiliar = pila;
	n = auxiliar->dato;
	pila = auxiliar->siguiente;
	delete auxiliar;
}
