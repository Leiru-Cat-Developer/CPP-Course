#include<iostream>
#include "Perro.h"

void Perro::mostrarDatos(){
	cout<<"NOMBRE DEL PERRO: "<<nombre<<endl;
	cout<<"RAZA DEL PERRO: "<<raza<<endl<<endl;
}

void Perro::jugar(){
	cout<<"EL PERRO "<<nombre<<" ESTA JUGANDO . . ."<<endl<<endl;
}
