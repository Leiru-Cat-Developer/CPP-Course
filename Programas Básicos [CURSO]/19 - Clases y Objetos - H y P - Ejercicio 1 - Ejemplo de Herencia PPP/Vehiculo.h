#ifndef VEHICULO_H	//GUARDIAN DE INCLUSION MULTIPLE
#define VEHICULO_H	//GUARDIAN DE INCLUSION MULTIPLE

#include<iostream>
#include<string.h>
using namespace std;

class Vehiculo{
	private:
		string marca;
		string color;
		
	protected:
		string modelo;
		
		string getModelo(){
			return modelo;
		}
		
	public:
		Vehiculo(string marca, string color, string modelo){
			this->marca = marca;
			this->color = color;
			this->modelo = modelo;
		}
		
		string getMarca(){
			return marca;
		}
		
		string getColor(){
			return color;
		}
		
		void setColor(string color){
			this->color = color;
		}
};
#endif	//GUARDIAN DE INCLUSION MULTIPLE
