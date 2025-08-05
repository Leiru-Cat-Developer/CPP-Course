#include<iostream>
#include<string.h>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
	private:
		string estrategia;
		
	public:
		Entrenador(string nombrePersona, string apellidoPersona, int edad, string estrategia) : Persona(nombrePersona,apellidoPersona,edad){
			this->estrategia = estrategia;
		}
		
		~Entrenador(){
			//DESTRUCTOR
		}
		
		//METODO VIRTUAL 1
		void partidoFutbol(){
			cout<<"EL ENTRENADOR DIRIGE EL PARTIDO DE FUTBOL"<<endl;
		}
		
		//METOD VIRTUAL 2
		void entrenamiento(){
			cout<<"EL ENTRENADOR DIRIGE EL ENTRENAMIENTO"<<endl;
		}
		
		void planificarEntrenamiento(){
			cout<<"EL ENTRENADOR PLANIFICA EL ENTRENAMIENTO"<<endl;
		}
};
