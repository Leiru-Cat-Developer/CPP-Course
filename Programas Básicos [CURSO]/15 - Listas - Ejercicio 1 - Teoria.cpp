/*
	LISTA ENLAZADA O TAMBI�N LLAMADA ESTRUCTURA DE DATOS DIN�MICA
	
	UNA LISTA ENLAZADA CONSTA DE UN N�MERO DE NODOS CON DOS COMPONENTES (CAMPOS), UN ENLACE
	EL SIGUIENTE NODO DE LA LISTA Y UN VALOR, QUE PUEDE SER DE CUALQUIER TIPO:
	
	1.- LISTAS SIMPLEMENTE ENLAZADAS
	2.- LISTAS DOBLEMENTE ENLAZADAS
	3.- LISTA CIRCULAR SIMPLEMENTE ENLAZADA
	4.- LISTA CIRCULAR DOBLEMENTE ENLAZADA
	
		1.- CADA NODO (ELEMENTO), CONTIENE UN �NICO ENLACE QUE CONECTA ESE NODO AL NODO SIGUIENTE
		O NODO SUCESOR. LA LISTA ES EFICIENTE EN RECORRIDOS DIRECTOS (ADELANTE)
	
		2.- CADA NODO CONTIENE DOS ENLACES, UNO A SU NODO PREDECESOR Y AL OTRO A SU NODO SUCESOR.
		LA LISTA ES EFICIENTE TANTO EN RECORRIDO DIRECTO COMO EN RECORRIDO INVERSO
	
		3.- UNA LISTA ENLAZADA SIMPLEMENTE EN LA QUE EL �LTIMO ELEMENTO SE ENLAZA AL PRIMER ELEMENTO,
		DE TAL MODO QUE LA LISTA PUEDE SER RECORRIDA DE MODO CIRCULAR
	
		4.- UNA LISTA DOBLEMENTE ENLAZADA EN LA QUE EL �LTIMO ELEMENTO SE ENLAZA AL PRIMER ELEMENTO
		Y VICEVERSA. ESTA LISTA SE PUEDE RECORRER DE MODO CIRCULAR TANTO EN DIRECCI�N DIRECTA COMO
		EN DIRECCI�N INVERSA
	
	OPERACIONES EN LAS LISTAS ENLAZADAS M�S UTILIZADAS
	
		- INSERTAR ELEMENTOS EN UNA LISTA ENLAZADA
		- MOSTRAR LOS ELEMENTOS DE UNA LISTA ENLAZADA
		- BUSCAR UN ELEMENTO EN UNA LISTA ENLAZADA
		- ELIMINAR UN ELEMENTO EN UNA LISTA ENLAZADA
		
		
	COMO UN ERROR ADICIONAL SIN SOLUCI�N O POSIBLE SOLUCI�N FUTURA, AL AGREGAR EL ELEMENTO Y
	BORRARLO HASTA NO DEJAR RASTRO DE EL Y LUEGO VOLVERLO A BORRAR SE SALE DEL PROGRAMA:
	
	1 -> 2 -> 3	-	BORRAMOS EL 2
	1 -> 3		-	BORRAMOS EL 2
	
	*SE SALE DEL PROGRAMA*
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
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int);
void eliminarNodoEspecifico(Nodo *&,int);
void eliminacionTotal(Nodo *&,int &);

//VARIABLES GLOBALES
Nodo *lista = NULL;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	menu();
	return 0;
}

//DEFINICI�N DE FUNCIONES
void menu(){
	int opcion = 0, dato;
	char respuesta;
	while(opcion != 6){
		cout<<"----- MENU -----"<<endl<<endl;
		cout<<"1. INSERTAR ELEMENTO"<<endl;
		cout<<"2. MOSTRAR LISTA"<<endl;
		cout<<"3. BUSCAR ELEMENTO"<<endl;
		cout<<"4. ELIMINAR ELEMENTO ESPECIFICO"<<endl;
		cout<<"5. ELIMINAR TODA LA LISTA"<<endl;
		cout<<"6. SALIR"<<endl<<endl;
		cout<<"OPCI�N: ";	cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:	cout<<"DIGITE UN N�MERO: ";	cin>>dato;	cout<<endl;
					insertarLista(lista,dato);
					system("pause");
					system("cls");
				break;
			case 2:	mostrarLista(lista);
					system("pause");
					system("cls");
				break;
			case 3:	cout<<"DIGITE EL N�MERO QUE DESEA BUSCAR: ";	cin>>dato;	cout<<endl;
					buscarLista(lista,dato);
					system("pause");
					system("cls");
				break;
			case 4:	cout<<"DIGITE EL N�MERO QUE DESEA ELIMINAR: ";	cin>>dato;	cout<<endl;
					eliminarNodoEspecifico(lista,dato);
					system("pause");
					system("cls");
				break;
			case 5:	cout<<"�EST� SEGURO DE QUE DESEA ELIMINAR LA LISTA? [S/N]: ";	cin>>respuesta;	cout<<endl;
					if((respuesta == 'S')||(respuesta == 's')){
						cout<<"ELIMINANDO . . ."<<endl<<endl;
						Sleep(5000);	//RETARDO DE 5 SEGUNDOS - FUNCIONA CON WINDOWS.H
						while(lista != NULL){
							eliminacionTotal(lista,dato);
							cout<<dato<<" -> ";
						}
						cout<<endl<<endl;
						system("pause");
						system("cls");
					}else{
						cout<<"CANCELANDO ELIMINACI�N . . ."<<endl<<endl;
						Sleep(3000);	//RETARDO DE 3 SEGUNDOS - FUNCIONA CON WINDOWS.H
						system("pause");
						system("cls");
					}
				break;
			case 6:	cout<<"SALIENDO . . ."<<endl<<endl;
					system("pause");
				break;
			default:	cout<<"LA OPCI�N QUE DIGITO NO EXISTE . . ."<<endl<<endl;
					system("pause");
					system("cls");
				break;
		}
	}
}
void insertarLista(Nodo *&lista,int n){
	//PASO 1
	Nodo *nuevo_nodo = new Nodo();
	//PASO 2
	nuevo_nodo->dato = n;
	//PASO 3
	Nodo *auxiliar1 = lista;
	Nodo *auxiliar2;
	/*
		PASO 4, TIENE 3 CASOS
			1.- CUANDO LA LISTA EST� VAC�A
			2.- CUANDO YA TENGAMOS UN NODO
			3.- CUANDO TENGAMOS 2 O MAS NODOS	
	*/
	while((auxiliar1 != NULL)&&(auxiliar1->dato < n)){
		auxiliar2 = auxiliar1;
		auxiliar1 = auxiliar1->siguiente;
	}
	if(lista == auxiliar1){
		lista = nuevo_nodo;
	}else{
		auxiliar2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = auxiliar1;
	cout<<"ELEMENTO "<<n<<" INSERTADO CORRECTAMENTE . . ."<<endl<<endl;
}
void mostrarLista(Nodo *lista){
	//PASO 1
	Nodo *actual = new Nodo();
	//PASO 2
	actual = lista;
	//PASO 3
	cout<<"----- MOSTRANDO LOS ELEMENTOS DE LA LISTA -----"<<endl<<endl;
	if(actual == NULL){
		cout<<"A�N NO HAY ELEMENTOS INSERTADOS EN LA LISTA . . .";
	}
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
	cout<<endl<<endl;
}
void buscarLista(Nodo *lista,int n){
	//PASO 1
	Nodo *actual = new Nodo();
	bool bandera = false;
	//PASO 2
	actual = lista;
	//PASO 3
	while((actual != NULL)&&(actual->dato <= n)){
		if(actual->dato == n){
			bandera = true;
		}
		actual = actual->siguiente;
	}
	//PASO 4
	if(bandera){
		//N�MERO ENCONTRADO
		cout<<"EL N�MERO "<<n<<" HA SIDO ENCONTRADO EN LA LISTA . . ."<<endl<<endl;
	}else{
		//N�MERO NO ENCONTRADO
		cout<<"EL N�MERO "<<n<<" NO EXISTE EN LA LISTA . . ."<<endl<<endl;
	}
}
void eliminarNodoEspecifico(Nodo *&lista,int n){
	//PASO 1
	if(lista != NULL){
		//PASO 2
		Nodo *auxiliar_borrar;
		Nodo *anterior = NULL;
		//PASO 3
		auxiliar_borrar = lista;
		//PASO 4
		while((auxiliar_borrar != NULL)&&(auxiliar_borrar->dato != n)){
			anterior = auxiliar_borrar;
			auxiliar_borrar = auxiliar_borrar->siguiente;
		}
		if(auxiliar_borrar == NULL){
			//EL N�MERO NO EXISTE
			cout<<"EL ELEMENTO NO SE HA ENCONTRADO EN LA LISTA"<<endl<<endl;
		}
		if(anterior == NULL){
			//EL N�MERO ES EL PRIMER ELEMENTO
			cout<<"EL ELEMENTO "<<n<<" HA SIDO ELIMINADO CORRECTAMENTE . . ."<<endl<<endl;
			lista = lista->siguiente;
			delete auxiliar_borrar;
		}else{
			//EL N�MERO EST� MUCHO M�S ADELANTE
			cout<<"EL ELEMENTO "<<n<<" HA SIDO ELIMINADO CORRECTAMENTE . . ."<<endl<<endl;
			anterior->siguiente = auxiliar_borrar->siguiente;
			delete auxiliar_borrar;
		}
	}else{
		cout<<"LA LISTA EST� VAC�A, NO HAY NINGUN ELEMENTO PARA ELIMINAR . . ."<<endl<<endl;
	}
}
void eliminacionTotal(Nodo *&lista,int &n){
	//PASO 1
	Nodo *auxiliar = lista;
	//PASO 2
	n = auxiliar->dato;
	//PASO 3
	lista = auxiliar->siguiente;
	//PASO 4
	delete auxiliar;
}
