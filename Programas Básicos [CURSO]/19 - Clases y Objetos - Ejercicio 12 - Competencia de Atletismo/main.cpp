/*
	CONSTRUIR UN PROGRAMA PARA UNA COMPETENCIA DE ATLETISMO, EL PROGRAMA DEBE GESTIONAR UNA SERIE DE ATLETAS
	CARACTERIZADOS POR SU NUMERO DE ATLETA, NOMBRE Y TIEMPO DE CARRERA, AL FINAL EL PROGRAMA DEBE MOSTRAR
	LOS DATOS DEL ATLETA GANADOR DE LA CARRERA.
*/

#include<iostream>
#include<string.h>
#include "Atleta.h"

using namespace std;

int main(int argc, char** argv) {
	Atleta* atletas;
	int numeroDeAtletas;
	
	int numeroAtleta;
	string nombreAtleta;
	float tiempoAtleta;
	
	int indiceGanador;
	
	cout<<"DIGITE EL NUMERO DE ATLETAS: ";	cin>>numeroDeAtletas;
	atletas = new Atleta[numeroDeAtletas];
	system("cls");
	
	for(int i=0; i<numeroDeAtletas; i++){
		cout<<"----- ATLETA "<<(i+1)<<" -----"<<endl<<endl;
		cout<<"NUMERO DE ATLETA: ";	cin>>numeroAtleta;
		
		fflush(stdin);				//LIMPIAR BUFFER
		
		cout<<"NOMBRE DE ATLETA: ";	getline(cin,nombreAtleta);
		cout<<"TIEMPO ATLETA: ";	cin>>tiempoAtleta;
		
		atletas[i] = Atleta(numeroAtleta,nombreAtleta,tiempoAtleta);
		
		system("cls");
	}
	
	indiceGanador = Atleta::indiceAtletaGanador(atletas,numeroDeAtletas);
	
	cout<<"A T L E T A          G A N A D O R"<<endl<<endl;
	(atletas+indiceGanador)->mostrarDatosGanador();
	
	system("pause");
	return 0;
}
