#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include "Vehiculo.h"

using namespace std;

void Vehiculo::mostrarDatos(){
	cout<<"MARCA: "<<marca<<endl;
	cout<<"MODELO: "<<modelo<<endl;
	cout<<"PRECIO: $"<<precio<<endl<<endl;
}

float Vehiculo::getPrecio(){
	return precio;
}

int Vehiculo::indiceBarato(Vehiculo coches[], int n){
	int indice = 0;
	float precio;
	precio = coches[0].getPrecio();
	for(int i=1; i<n; i++){
		if(coches[i].getPrecio() < precio){
			precio = coches[i].getPrecio();
			indice = i;
		}
	}
	return indice;
}
