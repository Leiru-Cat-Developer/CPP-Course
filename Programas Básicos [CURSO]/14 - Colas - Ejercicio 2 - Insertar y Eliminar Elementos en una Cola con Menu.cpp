/*
	INSERTAR Y ELIMINAR [CON MEN�]
	
	1. INSERTAR UN CARACTER EN LA COLA
	2. MOSTRAR LOS ELEMENTOS DE LA COLA
	3. SALIR
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
void menu();
void insertarCola(Nodo *&,Nodo *&,char);
bool cola_vacia(Nodo *);
void eliminarElementoCola(Nodo *&,Nodo *&,char &);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	menu();
	return 0;
}

//DEFINICI�N DE FUNCIONES
void menu(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int opcion = 0;
	char dato;
	do{
		cout<<"				   MEN�"<<endl<<endl;
		cout<<"1. INSERTAR CAR�CTER EN LA COLA"<<endl;
		cout<<"2. MOSTRAR TODOS LOS ELEMENTOS"<<endl;
		cout<<"3. SALIR"<<endl<<endl;
		cout<<"DIGITE SU OPCI�N: ";	cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:	cout<<"INGRESE EL CARACTER PARA AGREGAR: ";	cin>>dato;	cout<<endl;
					insertarCola(frente,fin,dato);
					system("pause");
					system("cls");
				break;
			case 2:	cout<<"--- AL MOSTRAR LOS DATOS, ESTOS TAMBI�N SE ELIMINAN ---"<<endl<<endl;
					cout<<"DATOS DE LA COLA: ";
					while(frente != NULL){
						eliminarElementoCola(frente,fin,dato);
						if(frente != NULL){
							cout<<dato<<" , ";
						}else{
							cout<<dato<<"."<<endl<<endl;
						}
					}
					system("pause");
					system("cls");
				break;
			case 3:	cout<<"SALIENDO . . ."<<endl<<endl;
				break;
			default:	cout<<"DIGITE UNA OPCI�N CORRECTA . . ."<<endl<<endl;
					system("pause");
					system("cls");
				break;
		}
	}while(opcion != 3);
	system("pause");
}
void insertarCola(Nodo *&frente, Nodo *&fin, char n){
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
void eliminarElementoCola(Nodo *&frente, Nodo *&fin, char &n){
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
