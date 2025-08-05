#include<iostream>
#include<string.h>
#include "Persona.h"
using namespace std;

class Futbolista : public Persona{
	private:
		int dorsal;
		string pocision;
		
	public:
		Futbolista(string nombrePersona, string apellidoPersona, int edad, int dorsal, string pocision) : Persona(nombrePersona,apellidoPersona,edad){
			this->dorsal = dorsal;
			this->pocision = pocision;
		}
		
		~Futbolista(){
			//DESTRUCTOR
		}
		
		//METODO VIRTUAL 1
		void partidoFutbol(){
			cout<<"EL FUTBOLISTA JUEGA EL PARTIDO DE FUTBOL"<<endl;
		}
		
		//METOD VIRTUAL 2
		void entrenamiento(){
			cout<<"EL FUTBOLISTA ESTA ENTRENANDO"<<endl;
		}
		
		void entrevista(){
			cout<<"EL FUTBOLISTA ESTA DANDO UNA ENTREVISTA"<<endl;
		}
};
