#include<iostream>
#include<string.h>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino{
	private:
		string nombreDuenio;
	public:
		GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio) : Felino(anioNacimiento,lugarNacimiento,raza){
			this->nombreDuenio = nombreDuenio;
		}
		
		~GatoDomestico(){
			//DESTRUCTOR
		}
		
		string imprimirDieta(){
			return "LA DIETA DEL GATO ES CON CROQUETAS";
		}
		
		void setNombreDuenio(string nuevoNombre){
			this->nombreDuenio = nuevoNombre;
		}
		
		string getNombreDuenio(){
			return nombreDuenio;
		}
};
