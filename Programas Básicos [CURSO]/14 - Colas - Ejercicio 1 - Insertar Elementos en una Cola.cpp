/*
	INSERTAR Y ELIMINAR [SIN MENÚ]
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
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void eliminarElementoCola(Nodo *&,Nodo *&,int &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	cout<<"DIGITE UN NÚMERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN NÚMERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN NÚMERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN NÚMERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"QUITANDO ELEMENTOS DE LA COLA: ";
	while(frente != NULL){
		eliminarElementoCola(frente,fin,dato);
		if(frente != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<"."<<endl<<endl;
		}
	}
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	//PASO1
	Nodo *nuevo_nodo = new Nodo();
	//PASO2
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	//PASO3
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	cout<<"ELEMENTO "<<n<<" INSERTADO CORRECTAMENTE . . ."<<endl<<endl;
}
bool cola_vacia(Nodo *frente){
	return(frente == NULL)? true : false;	//OPERADOR TERNARIO PARA HACER MÁS SENCILLO EL CÓDIGO
}
void eliminarElementoCola(Nodo *&frente, Nodo *&fin, int &n){
	//PASO1
	n = frente->dato;
	//PASO2
	Nodo *auxiliar = frente;
	//PASO3
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->siguiente;
	}
	delete auxiliar;
}
