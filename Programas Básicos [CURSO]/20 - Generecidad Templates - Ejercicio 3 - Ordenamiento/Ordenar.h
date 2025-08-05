#include<iostream>
#include "Intercambio.h"
using namespace std;

//PLANTILLAS DE FUNCIONES
template <typename T>

//DEFINICION DE PLANTILLAS DE FUNCIONES
void ordenarAscendentemente(T *arreglo, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<(n-1); j++){
			if(arreglo[j] > arreglo[j+1]){
				intercambiarDatos(arreglo[j],arreglo[j+1]);
			}
		}
	}
}

//PLANTILLAS DE FUNCIONES
template <typename T>

//DEFINICION DE PLANTILLAS DE FUNCIONES
void ordenarDescendentemente(T *arreglo, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<(n-1); j++){
			if(arreglo[j] < arreglo[j+1]){
				intercambiarDatos(arreglo[j],arreglo[j+1]);
			}
		}
	}
}
