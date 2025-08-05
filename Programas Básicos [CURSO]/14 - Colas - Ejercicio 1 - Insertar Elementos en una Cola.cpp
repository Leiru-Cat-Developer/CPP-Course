/*
	INSERTAR Y ELIMINAR [SIN MEN�]
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
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void eliminarElementoCola(Nodo *&,Nodo *&,int &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	cout<<"DIGITE UN N�MERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN N�MERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN N�MERO: ";	cin>>dato;	cout<<endl;
	insertarCola(frente,fin,dato);
	cout<<"DIGITE UN N�MERO: ";	cin>>dato;	cout<<endl;
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

//DEFINICI�N DE FUNCIONES
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
	return(frente == NULL)? true : false;	//OPERADOR TERNARIO PARA HACER M�S SENCILLO EL C�DIGO
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
