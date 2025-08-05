/*
	HACER UN PROGRAMA QUE GUARDE DATOS DE LOS CLIENTES DE UN BANCO, LOS ALMACENE EN LA COLA,
	Y POR �LTIMO MUESTRE LOS CLIENTES EN EL ORDEN CORRECTO
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
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char respuesta;
	do{
		cargarCliente(c);
		insertarCola(frente,fin,c);
		cout<<"�DESEA AGREGAR OTRO CLIENTE? [S/N]: ";	cin>>respuesta;	cout<<endl;
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

//DEFINICI�N DE FUNCIONES
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
	return(frente == NULL)? true : false;	//OPERADOR TERNARIO PARA HACER M�S SENCILLO EL C�DIGO
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
