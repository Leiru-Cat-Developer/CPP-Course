/*
	HACER UN PROGRAMA QUE GUARDE DATOS DE LOS CLIENTES DE UN BANCO, LOS ALMACENE EN LA COLA,
	Y POR ÚLTIMO MUESTRE LOS CLIENTES EN EL ORDEN CORRECTO
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
struct Cliente{
	char nombre[100];
	char clave[10];
	int edad;
};
struct Nodo{
	Cliente dato;		//VARIABLE DE TIPO ESTRUCTURA
	Nodo *siguiente;	
};

//PROTOTIPOS DE FUNCIONES
void cargarCliente(Cliente &);
void insertarCola(Nodo *&,Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void eliminarElementoCola(Nodo *&,Nodo *&,Cliente &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char respuesta;
	do{
		cargarCliente(c);
		insertarCola(frente,fin,c);
		cout<<"¿DESEA AGREGAR OTRO CLIENTE? [S/N]: ";	cin>>respuesta;	cout<<endl;
		system("cls");	
	}while((respuesta == 'S')||(respuesta == 's'));
	cout<<"CARGA DE CLIENTES EXITOSA"<<endl<<endl;
	while(frente != NULL){
		eliminarElementoCola(frente,fin,c);
		cout<<"NOMBRE: "<<c.nombre<<endl;
		cout<<"CLAVE: "<<c.clave<<endl;
		cout<<"EDAD: "<<c.edad<<endl<<endl;
	}
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void cargarCliente(Cliente &c){
	fflush(stdin);
	cout<<"AGREGAR NUEVO CLIENTE"<<endl<<endl;
	cout<<"NOMBRE: ";	cin.getline(c.nombre,100,'\n');
	cout<<"CLAVE: ";	cin.get(c.clave,10,'\n');
	cout<<"EDAD: ";	cin>>c.edad;	cout<<endl;
}
void insertarCola(Nodo *&frente, Nodo *&fin, Cliente n){
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
	cout<<"ELEMENTO INSERTADO CORRECTAMENTE . . ."<<endl<<endl;
}
bool cola_vacia(Nodo *frente){
	return(frente == NULL)? true : false;	//OPERADOR TERNARIO PARA HACER MÁS SENCILLO EL CÓDIGO
}
void eliminarElementoCola(Nodo *&frente, Nodo *&fin, Cliente &n){
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
