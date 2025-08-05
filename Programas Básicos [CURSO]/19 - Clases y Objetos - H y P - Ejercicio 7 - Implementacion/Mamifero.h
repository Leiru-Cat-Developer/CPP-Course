//CLASE ABSTRACTA
#ifndef MAMIFERO_H
#define MAMIFERO_H
#include<iostream>
#include<string.h>
using namespace std;

class Mamifero{
	private:
		int anioNacimiento;
		string lugarNacimiento;
		string raza;
	public:
		Mamifero(int anioNacimiento, string lugarNacimiento, string raza){
			this->anioNacimiento = anioNacimiento;
			this->lugarNacimiento = lugarNacimiento;
			this->raza = raza;
		}
		
		~Mamifero(){
			//DESTRUCTOR
		}
		
		virtual string imprimirDieta() = 0;	//METODO VIRCUAL
		
		int getAnioNacimiento(){
			return anioNacimiento;
		}
		
		string getLugarNacimiento(){
			return lugarNacimiento;
		}
		
		string getRaza(){
			return raza;
		}
};
#endif
