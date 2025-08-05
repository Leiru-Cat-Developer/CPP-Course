#include<iostream>
#include<string.h>
#include "Atleta.h"

using namespace std;

void Atleta::mostrarDatosGanador(){
	cout<<"NUMERO DE ATLETA: "<<numeroDeAtleta<<endl;
	cout<<"NOMBRE DE ATLETA: "<<nombreAtleta<<endl;
	cout<<"TIEMPO DE CARRERA: "<<tiempoCarreraAtleta<<endl<<endl;
}

int Atleta::indiceAtletaGanador(Atleta atletas[], int n){
	float tiempoCarrera;
	int indice = 0;
	
	tiempoCarrera = atletas[0].getTiempoCarrera();
	for(int i=1; i<n; i++){
		if(atletas[i].getTiempoCarrera() < tiempoCarrera){
			tiempoCarrera = atletas[i].getTiempoCarrera();
			indice = i;
		}
	}
	return indice;
}

float Atleta::getTiempoCarrera(){
	return tiempoCarreraAtleta;
}
