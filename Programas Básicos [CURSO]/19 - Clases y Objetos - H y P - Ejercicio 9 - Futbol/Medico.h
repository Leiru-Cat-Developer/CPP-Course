#include<iostream>
#include<string.h>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
	private:
		string titulacion;
		int aniosExperiencia;
		
	public:
		Medico(string nombrePersona, string apellidoPersona, int edad, string titulacion, int aniosExperiencia) : Persona(nombrePersona,apellidoPersona,edad){
			this->titulacion = titulacion;
			this->aniosExperiencia = aniosExperiencia;
		}
		
		~Medico(){
			//DESTRUCTOR
		}
		
		//METODO VIRTUAL 1
		void partidoFutbol(){
			cout<<"EL MEDICO DA ASISTENCIA EN EL PARTIDO"<<endl;
		}
		
		//METOD VIRTUAL 2
		void entrenamiento(){
			cout<<"EL MEDICO DA ASISTENCIA EN EL ENTRENAMIENTO"<<endl;
		}
		
		void curarLesion(){
			cout<<"EL MEDICO CURA LA LESION"<<endl;
		}
};
