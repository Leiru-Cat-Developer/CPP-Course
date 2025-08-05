//CLASE DE TIPO ABSTRACTA
#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<string.h>
using namespace std;

class Persona{
	protected:
		string nombrePersona;
		string apellidoPersona;
		int edad;
		
	public:
		Persona(string nombrePersona, string apellidoPersona, int edad){
			this->nombrePersona = nombrePersona;
			this->apellidoPersona = apellidoPersona;
			this->edad = edad;
		}
		
		~Persona(){
			//DESTRUCTOR
		}
		
		void viajar(){
			cout<<"LA PERSONA ESTA VIAJANDO"<<endl;
		}
		
		virtual void partidoFutbol()=0;	//METODO VIRTUAL
		virtual void entrenamiento()=0;	//METODO VIRTUAL
		
		string getNombrePersona(){
			return nombrePersona;
		}
		
		string getApellidoPersona(){
			return apellidoPersona;
		}
		
		int getEdad(){
			return edad;
		}
};
#endif
