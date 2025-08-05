/*
	HACER UNA FUNCIÓN PARA ALMACENAR N NÚMEROS EN UN ARREGLO DINÁMICO, POSTERIORMENTE
	EN OTRA FUNCIÓN BUSCAR UN NÚMERO EN PARTICULAR. PUEDES UTILIZAR CUALQUIER MÉTODO
	DE BUSQUEDA YA SEA SECUENCIAL O BINARIO.
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void buscarDatos(int *, int);

//VARIABLES GLOBALES
int numeroDeElementos = 0, *punteroElemento;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	buscarDatos(punteroElemento,numeroDeElementos);
	delete[] punteroElemento;		//ELIMINAMOS MEMORIA PARA ARREGLO
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO DE ELEMENTOS DEL ARREGLO: ";	cin>>numeroDeElementos;	cout<<endl;
	punteroElemento = new int[numeroDeElementos];		//RESERVAMOS MEMORIA PARA ARREGLO
	for(int i=0; i<numeroDeElementos; i++){
		cout<<"DIGITE EL NÚMERO ["<<i<<"]: ";	cin>>*(punteroElemento+i);
	}
	cout<<endl;
}
void buscarDatos(int *x, int y){
	//BUSQUEDA SECUENCIAL
	int dato, i = 0;
	bool bandera = false;
	cout<<"DIGITE EL DATO QUE DESEA BÚSCAR: ";	cin>>dato;	cout<<endl;
	while((i < y)&&(bandera == false)){
		if(*(x+i) == dato){
			bandera = true;
		}
		i++;
	}
	if(bandera == false){
		cout<<"EL NÚMERO '"<<dato<<"' NO EXISTE EN EL ARREGLO . . ."<<endl<<endl;
	}else if(bandera == true){
		cout<<"EL NÚMERO '"<<dato<<"' FUE ENCONTRADO EN LA POCISIÓN: "<<i-1<<endl<<endl;
	}
}
