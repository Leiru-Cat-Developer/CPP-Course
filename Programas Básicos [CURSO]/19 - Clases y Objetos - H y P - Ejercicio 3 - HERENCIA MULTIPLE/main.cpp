#include<iostream>
#include "Hidroavion.h"
using namespace std;

int main(int argc, char** argv) {
	Hidroavion* H1 = new Hidroavion("JESICA","HA99","123OP");
	
	H1->mostrarDatos();
	
	//PODEMOS ACCEDER A LOS DATOS PUBLICOS DE AMBAS CLASES
	H1->indicarBarco();
	H1->indicarAvion();
	
	delete H1;
	return 0;
}
