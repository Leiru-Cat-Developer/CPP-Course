/*
	CREAR UNA LISTA QUE ALMACENE "N" NUMEROS REALES Y CALCULAR SU SUMA Y PROMEDIO
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	float numero = 0;
	int contador = 0;
	char respuesta;
	do{
		cout<<"DIGITE N�MERO: ";	cin>>numero;			cout<<endl;		insertarLista(lista,numero);
		contador++;
		cout<<"�DESEA AGREGAR OTRO N�MERO? [S/N]: ";		cin>>respuesta;	cout<<endl;
		system("pause");
		system("cls");
	}while((respuesta == 'S')||(respuesta == 's'));
	mostrarLista(lista);
	calcular(lista,contador);
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
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
