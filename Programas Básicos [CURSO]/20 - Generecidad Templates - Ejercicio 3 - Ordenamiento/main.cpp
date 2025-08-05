/*
	DEFINIR DOS PLANTILLAS DE FUNCIONES DENTRO DE UN ARCHIVO DE CABECERA
	LLAMADO "ORDENAR.H" QUE PUEDAN ORDENAR TANTO ASCENDENTEMENTE COMO
	DESCENDENTEMENTE UN ARREGLO DE N ELEMENTOS, RECUERDE QUE PUEDE
	UTILIZAR EL ARCHIVO DE INTERCAMBIO DEL EJERCICIO ANTERIOR
*/
#include<iostream>
#include "Ordenar.h"
using namespace std;

//PLANTILLAS DE FUNCIONES
template <typename T>

//DEFINICION DE PLANTILLAS DE FUNCIONES
void pedirDatos(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout<<"DIGITE ELEMENTO ["<<i<<"]: ";	cin>>arreglo[i];
	}
}

//PLANTILLAS DE FUNCIONES
template <typename T>

//DEFINICION DE PLANTILLAS DE FUNCIONES
void mostrarArreglo(T *arreglo, int n){
	for(int i=0; i<n; i++){
		cout<<"ELEMENTO ["<<i<<"]: "<<arreglo[i]<<endl;
	}
}

int main(int argc, char** argv) {
	int numeroDeElementos;
	
	cout<<"DIGITE LA CANTIDAD DE ELEMENTOS: ";	cin>>numeroDeElementos;	cout<<endl;
	char *arregloDinamico = new char[numeroDeElementos];
	
	cout<<"\\\\ PIDIENDO LOS ELEMENTOS DEL ARREGLO ////"<<endl<<endl;
	pedirDatos(arregloDinamico,numeroDeElementos);	//PLANTILLAS PEDIR DATOS
	cout<<endl;
	
	//ORDENAMOS DE MANERA ASCENDENTE
	cout<<"\\\\ ARREGLO ASCENDENTE ////"<<endl<<endl;
	ordenarAscendentemente(arregloDinamico,numeroDeElementos);
	mostrarArreglo(arregloDinamico,numeroDeElementos);
	cout<<endl;
	
	//ORDENAMOS DE MANERA ASCENDENTE
	cout<<"\\\\ ARREGLO DESCENDENTE ////"<<endl<<endl;
	ordenarDescendentemente(arregloDinamico,numeroDeElementos);
	mostrarArreglo(arregloDinamico,numeroDeElementos);
	cout<<endl;
	
	delete[] arregloDinamico;
	return 0;
}
