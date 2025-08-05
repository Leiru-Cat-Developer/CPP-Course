#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
#include<string.h>
using namespace std;

class Alumno{
	private:
		string nombreCarrera;
		
	public:
		Alumno(string nombreCarrera){
			this->nombreCarrera = nombreCarrera;
		}
		
		~Alumno(){
			//DESTRUCTOR
		}
		
		void mostrarDatos(){
			cout<<"NOMBRE DE LA CARRERA: "<<nombreCarrera<<endl;
		}
		
		void setNombreCarrera(string nuevaNombreCarrera){
			this->nombreCarrera = nuevaNombreCarrera;
		}
		
		string getNombreCarrera(){
			return nombreCarrera;
		}
};
#endif
