#ifndef FELINO_H
#define FELINO_H
#include<iostream>
#include<string.h>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero{
	private:
		string nombreCirco;
	public:
		Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anioNacimiento,lugarNacimiento,raza){
			this->nombreCirco = nombreCirco;
		}
		
		~Felino(){
			//DESTRUCTOR
		}
		
		Felino(int anioNacimiento, string lugarNacimiento, string raza) : Mamifero(anioNacimiento,lugarNacimiento,raza){
			//SOBRECARGA DE CONSTRUCTOR 1
		}
		
		string imprimirDieta(){
			return "LA DIETA DEL FELINO ES A BASE DE CARNE";
		}
		
		void setNombreCirco(string nuevoNombre){
			this->nombreCirco = nuevoNombre; 
		}
		
		string getNombreCirco(){
			return nombreCirco;
		}
};
#endif
