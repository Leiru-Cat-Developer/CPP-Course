/*
	CREAR UNA LISTA QUE ALMACENE "N" NUMEROS REALES Y CALCULAR SU SUMA Y PROMEDIO
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
	float dato;
	Nodo *siguiente;	
};

//PROTOTIPOS DE FUNCIONES
void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcular(Nodo *,int);

//VARIABLES GLOBALES
Nodo *lista = NULL;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	float numero = 0;
	int contador = 0;
	char respuesta;
	do{
		cout<<"DIGITE NÚMERO: ";	cin>>numero;			cout<<endl;		insertarLista(lista,numero);
		contador++;
		cout<<"¿DESEA AGREGAR OTRO NÚMERO? [S/N]: ";		cin>>respuesta;	cout<<endl;
		system("pause");
		system("cls");
	}while((respuesta == 'S')||(respuesta == 's'));
	mostrarLista(lista);
	calcular(lista,contador);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void insertarLista(Nodo *&lista,float n){
	//PASO 1
	Nodo *nuevo_nodo = new Nodo();
	Nodo *auxiliar;
	//PASO 2
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	//PASO 3
	if(lista == NULL){
		lista = nuevo_nodo;
	}else{
		auxiliar = lista;
		while(auxiliar->siguiente != NULL){
			auxiliar = auxiliar->siguiente;
		}	
		auxiliar->siguiente = nuevo_nodo;
	}
	cout<<"ELEMENTO "<<n<<" INSERTADO CORRECTAMENTE . . ."<<endl<<endl;
}
void mostrarLista(Nodo *lista){
	cout<<"----- MOSTRANDO LOS ELEMENTOS DE LA LISTA -----"<<endl<<endl;
	while(lista != NULL){
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente;
	}
	cout<<endl<<endl;
}
void calcular(Nodo *lista,int contador){
	float suma = 0, promedio = 0;
	while(lista != NULL){
		suma += lista->dato;
		lista = lista->siguiente;
	}
	promedio = suma/contador;
	cout<<"LA SUMA ES: "<<suma<<endl;
	cout<<"EL PROMEDIO ES: "<<promedio<<endl<<endl;
}
