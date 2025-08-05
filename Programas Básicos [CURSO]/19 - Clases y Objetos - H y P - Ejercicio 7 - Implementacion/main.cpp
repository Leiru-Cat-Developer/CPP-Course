/*
	IMPLEMENTACION DE HERENCIA EJERCICIO 1
	
	CONSIDERE LA SIGUIENTE RELACION DE HERENCIA. DEFINA LAS CLASES:
	
		- MAMIFERO
		- FELINO
		- GATO DOMESTICO
	
	DECIDA QUE ATRIBUTOS Y METODOS INCLUIR DE TAL MANERA QUE SU
	PROGRAMA PUEDA:
	
		- DECLARAR UN OBJETO LLAMADO MININO DE TIPO "GATO DOMESTICO"
		  Y OTRO LLAMADO "ESTRELLA CIRCO" DE TIPO FELINO
		- IMPRIMIR LA DIETA DE MININO Y "ESTRELLA CIRCO"
		- IMPRIMIR EL ANIO Y LUGAR DE NACIMIENTO DE MININO Y
		  "ESTRELLA CIRCO"
		- CAMBIAR EL NOMBRE DEL "DUENIO MININO"
		- IMPRIMIR LA RAZA DE MININO Y DE ESTRELLA CIRCO
		- CAMBIAR EL NOMBRE DEL CIRCO EN EL QUE ACTUA "ESTRELLA CIRCO"
*/
#include<iostream>
#include<string.h>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

int main(int argc, char** argv) {
	GatoDomestico* minino = new GatoDomestico(2015,"TRUJILLO","PERSA","URIEL");
	Felino* estrellaCirco = new Felino(2014,"INDIA","BENGALA","ATAIDE");
	
	//PRIMERA PARTE
	cout<<"-------- DIETAS --------"<<endl<<endl;
	cout<<"GATO: "<<minino->imprimirDieta()<<endl;
	cout<<"FELINO: "<<estrellaCirco->imprimirDieta()<<endl<<endl;
	
	//SEGUNDA PARTE
	cout<<"-------- ANIO NACIMIENTO + LUGAR DE NACIMIENTO --------"<<endl<<endl;
	cout<<"GATO: "<<minino->getAnioNacimiento()<<endl;
	cout<<"GATO: "<<minino->getLugarNacimiento()<<endl<<endl;
	cout<<"FELINO: "<<estrellaCirco->getAnioNacimiento()<<endl;
	cout<<"FELINO: "<<estrellaCirco->getLugarNacimiento()<<endl<<endl;
	
	//TERCERA PARTE
	cout<<"-------- CAMBIAR EL NOMBRE DEL DUENIO DEL GATO --------"<<endl<<endl;
	string nuevoNombre;
	cout<<"EL NOMBRE ACTUAL DEL DUENIO ES: "<<minino->getNombreDuenio()<<endl;
	cout<<"DIGITE EL NOMBRE DEL NUEVO DUENIO: ";	getline(cin,nuevoNombre);
	minino->setNombreDuenio(nuevoNombre);
	cout<<"EL NUEVO DUENIO ES: "<<minino->getNombreDuenio()<<endl<<endl; 
	
	
	//CUARTA PARTE
	cout<<"-------- MOSTRAR LA RAZA DE CADA UNO --------"<<endl<<endl;
	cout<<"GATO: "<<minino->getRaza()<<endl;
	cout<<"FELINO: "<<estrellaCirco->getRaza()<<endl<<endl;
	
	//QUINTA PARTE
	cout<<"-------- CAMBIAR NOMBRE DEL CIRCO --------"<<endl<<endl;
	string nuevoCirco;
	cout<<"EL NOMBRE ACTUAL DEL CIRCO ES: "<<estrellaCirco->getNombreCirco()<<endl;
	cout<<"DIGITE EL NOMBRE DEL CIRCO: ";	getline(cin,nuevoCirco);
	estrellaCirco->setNombreCirco(nuevoCirco);
	cout<<"EL NUEVO NOMBRE DEL CIRCO ES: "<<estrellaCirco->getNombreCirco()<<endl<<endl;
	
	delete minino;
	delete estrellaCirco;
	return 0;
}
