#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include<iostream>
#include<string.h>
using namespace std;

class Deportista{
	private:
		string nombreEntrenador;
			
	public:
		Deportista(string nombreEntrenador){
			this->nombreEntrenador = nombreEntrenador;
		}
		
		~Deportista(){
			//DESTRUCTOR
		}
		
		void mostrarDatos(){
			cout<<"NOMBRE ENTRENADOR: "<<nombreEntrenador<<endl;
		}
		
		void setNombreEntrenador(string nuevoNombreEntrenador){
			this->nombreEntrenador = nuevoNombreEntrenador;
		}
		
		string getNombreEntrenador(){
			return nombreEntrenador;
		}
};
#endif
