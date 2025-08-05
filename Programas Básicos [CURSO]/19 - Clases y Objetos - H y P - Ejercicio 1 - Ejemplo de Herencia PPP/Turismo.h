//HERENCIA PUBLICA
#include<iostream>
#include<string.h>
#include "Vehiculo.h"
using namespace std;

class Turismo : public Vehiculo{
	private:
		int numeroDePuertas;
		
	public:
		Turismo(string marca, string color, string modelo, int numeroDePuertas) : Vehiculo(marca,color,modelo){
			this->numeroDePuertas = numeroDePuertas;
		}
		
		~Turismo(){
			//DESTRUCTOR
		}
		
		int getNumeroDePuertas(){
			return numeroDePuertas;
		}
		
		string retornarModelo(){
			string mensaje = getModelo();
			return mensaje;
		}
};
