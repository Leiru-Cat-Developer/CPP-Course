//HERENCIA PROTEGIDA
#include<iostream>
#include<string.h>
#include "Vehiculo.h"
using namespace std;

class Furgoneta : protected Vehiculo{
	private:
		int carga;
	public:
		Furgoneta(string marca, string color, string modelo, int carga) : Vehiculo(marca,color,modelo){
			this->carga = carga;
		}
		
		~Furgoneta(){
			//DESTRUCTOR
		}
		
		string reportarColor(){
			string mensaje = getColor();
			return mensaje;
		}
		
		int getCarga(){
			return carga;
		}
};
