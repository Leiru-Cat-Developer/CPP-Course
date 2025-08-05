/*
	ÁRBOLES - ESTRUCTURAS DE DATOS NO LINEALES QUE SON DINAMICAS
	
		UN ÁRBOL CONSTA DE UN CONJUNTO FINITO DE ELEMENTOS, DENOMINADOS NODOS Y UN CONJUNTO FINITO
		DE LÍNEAS DIRIGIDAS, DENOMINADAS RAMAS, QUE CONECTAN LOS NODOS
	
		¿CÓMO DEFINIMOS UN NODO?
			- NECESITAMOS UN NODO QUE APUNTE A OTROS NODOS
		
		- LONGITUD DE CAMINO: CANTIDAD DE RAMAS PARA LLEGAR AL DATO DESEADO, EL NÚMERO DE NODOS MENOS 1
		- ALTURA DEL NODO: CAMINO VISTO DESDE LAS HOJAS, EL NÚMERO DE NODOS MENOS 1
		- PROFUNDIDAD DEL NODO: CAMINO VISTO DESDE EL NIVEL EN EL QUE ESTÁ
		- NODOS HERMANOS: ESTÁN AL MISMO NIVEL Y TIENEN AL MISMO PADRE
		- ORDEN: MÁXIMA CANTIDAD DE HIJOS QUE PUEDE TENER, SE CUENTA DESDE 0 - N HIJOS
	
			NIVEL 0:	RAÍZ
			NIVEL 1:	RAMAS
			NIVEL 2:	RAMAS
			NIVEL 3: 	HOJAS
	
	ÁRBOLES BINARIOS
	
		UN ÁRBOL BINARIO ES UN ÁRBOL DE ORDEN 2. SE CONOCE EL NOO DE LA IZQUIERDA COMO HIJO IZQUIERDO
		Y EL NODO DE LA DERECHA COMO HIJO DERECHO. UN ÁRBOL BINARIO ES UNA ESTRUCTURA RECURSIVA. UN
		ÁRBOL BINARIO SE DIVIDE EN TRES SUBCONJUNTOS DISJUNTOS:
		
			- NODO RAÍZ
			- SUBÁRBOL IZQUIERDO
			- SUBÁRBOL DERECHO
			
	TIPOS DE ARBOLES BINARIOS
	
			- ÁRBOL LLENO
			- ÁRBOL COMPLETO
			- ÁRBOL DEGENERADO
			
	ÁRBOL BINARIO DE BÚSQUEDA
	
		ES AQUEL QUE DADO UN NODO, TODOS LOS DATOS DEL SUBÁRBOL IZQUIERDO SON MENORES, MIENTRAS
		QUE TODOS LOS DATOS DEL SUBÁRBOL DERECHO SON MAYORES
		
			- INSERTAR
			- MOSTRAR
			- BUSCAR
			- RECORRER EL ÁRBOL [3 TIPOS DE RECORRIDO]
			- ELIMINAR UN NODO
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
	Nodo *derecha;
	Nodo *izquierda;	
	Nodo *padre;
};

//PROTOTIPOS DE FUNCIONES
void menu();
Nodo *crearNodo(int,Nodo *);
void insertar(Nodo *&,int,Nodo *);
void mostrar(Nodo *,int);
bool buscar(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

//VARIABLES GLOBALES
Nodo *arbol = NULL;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	menu();
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void menu(){
	int opcion = 0, numero = 0, contador = 0;
	while(opcion != 8){
		cout<<"---------- MENÚ ----------"<<endl<<endl;
		cout<<"1. INSERTAR"<<endl;
		cout<<"2. MOSTRAR"<<endl;
		cout<<"3. BUSCAR"<<endl;
		cout<<"4. RECORRIDO EN PRE ORDEN"<<endl;
		cout<<"5. RECORRIDO EN IN ORDEN"<<endl;
		cout<<"6. RECORRIDO EN POST ORDEN"<<endl;
		cout<<"7. ELIMINAR"<<endl;
		cout<<"8. SALIR"<<endl<<endl;
		cout<<"OPCIÓN: ";	cin>>opcion;	cout<<endl;
		switch(opcion){
			case 1:	cout<<"DIGITE UN NÚMERO: ";	cin>>numero;	cout<<endl;
					insertar(arbol,numero,NULL);
				break;
			case 2:	mostrar(arbol,contador);		contador = 0;		cout<<endl;
				break;
			case 3:	cout<<"DIGITE EL NÚMERO QUE DESEA BÚSCAR: ";		cin>>numero;	cout<<endl;
					if(buscar(arbol,numero)){
						cout<<"EL NÚMERO "<<numero<<" EXISTE EN EL ÁRBOL"<<endl<<endl;
					}else{
						cout<<"EL NÚMERO "<<numero<<" NO EXISTE EN EL ÁRBOL"<<endl<<endl;
					}
				break;
			case 4:	preOrden(arbol);	cout<<endl<<endl;
				break;
			case 5:	inOrden(arbol);	cout<<endl<<endl;
				break;
			case 6:	postOrden(arbol);	cout<<endl<<endl;
				break;
			case 7:	cout<<"DIGITE EL NODO QUE DESEA ELIMINAR: ";	cin>>numero;
					eliminar(arbol,numero);
					cout<<endl;
				break;	
			case 8:	cout<<"SALIENDO . . ."<<endl<<endl;
				break;
				
			default:	cout<<"ESTÁ OPCIÓN NO EXISTE . . ."<<endl<<endl;
				break;
		}
		system("pause");
		system("cls");
	}
}
Nodo *crearNodo(int n,Nodo *padre){
	//PASO 1
	Nodo *nuevo_nodo = new Nodo();
	//PASO 2
	nuevo_nodo->dato = n;
	nuevo_nodo->derecha = NULL;
	nuevo_nodo->izquierda = NULL;
	nuevo_nodo->padre = padre;
	//PASO 3
	return nuevo_nodo;
}
void insertar(Nodo *&arbol,int n,Nodo *padre){
	if(arbol == NULL){
		//CASO 1
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo;
	}else{
		//CASO 2
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertar(arbol->izquierda,n,arbol);
		}else{
			insertar(arbol->derecha,n,arbol);
		}
	}
}
void mostrar(Nodo *arbol,int contador){
	if(arbol == NULL){
		return;
	}else{
		//LADO DERECHO
		mostrar(arbol->derecha,contador+1);
		for(int i=0; i<contador; i++){
			cout<<"     ";
		}
		cout<<arbol->dato<<endl;
		//LADO IZQUIERDO
		mostrar(arbol->izquierda,contador+1);
	}
}
bool buscar(Nodo *arbol,int n){
	if(arbol == NULL){
		return false;
	}else if(arbol->dato == n){
		return true;
	}else if(n < arbol->dato){
		return buscar(arbol->izquierda,n);
	}else{
		return buscar(arbol->derecha,n);
	}
}
void preOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izquierda);
		preOrden(arbol->derecha);
	}
}
void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		inOrden(arbol->izquierda);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->derecha);
	}
}
void postOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		postOrden(arbol->izquierda);
		postOrden(arbol->derecha);
		cout<<arbol->dato<<" - ";
	}
}
void eliminar(Nodo *arbol,int n){
	if(arbol == NULL){
		return;
	}else if(n < arbol->dato){
		eliminar(arbol->izquierda,n);
	}else if(n > arbol->dato){
		eliminar(arbol->derecha,n);
	}else{
		eliminarNodo(arbol);
	}
}
void eliminarNodo(Nodo *nodo_eliminar){
	if(nodo_eliminar->izquierda && nodo_eliminar->derecha){
		//BORRAR UN NODO CON DOS SUBÁRBOLES HIJOS
		Nodo *menor = minimo(nodo_eliminar->derecha);
		nodo_eliminar->dato = menor->dato;
		eliminarNodo(menor);
	}else if(nodo_eliminar->izquierda){
		//BORRAR UN NODO TENGA UN HIJO IZQUIERDO
		reemplazar(nodo_eliminar,nodo_eliminar->izquierda);
		destruirNodo(nodo_eliminar);
	}else if(nodo_eliminar->derecha){
		//BORRAR UN NODO TENGA UN HIJO DERECHO
		reemplazar(nodo_eliminar,nodo_eliminar->derecha);
		destruirNodo(nodo_eliminar);
	}else{
		//BORRAR UN NODO HOJA
		reemplazar(nodo_eliminar,NULL);
		destruirNodo(nodo_eliminar);		
	}
}
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){
		return NULL;
	}
	if(arbol->izquierda){
		return minimo(arbol->izquierda);
	}else{
		return arbol;
	}
}
void reemplazar(Nodo *arbol,Nodo *nuevo_nodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izquierda->dato){
			arbol->padre->izquierda = nuevo_nodo;
		}else if(arbol->dato == arbol->padre->derecha->dato){
			arbol->padre->derecha = nuevo_nodo;
		}
	}
	if(nuevo_nodo){
		nuevo_nodo->padre = arbol->padre;
	}
}
void destruirNodo(Nodo *nodo){
	nodo->izquierda = NULL;
	nodo->derecha = NULL;
	delete nodo;
}
