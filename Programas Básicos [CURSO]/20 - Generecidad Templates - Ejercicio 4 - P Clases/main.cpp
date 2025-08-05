#include<iostream>
#include "Ejemplo.h"
using namespace std;

int main(int argc, char** argv) {
	PlantillaClase <int,float> PC1(10,55.55);	//ASI SE CREAN OBJETOS
	
	PC1.mostrarDatos();
	
	PC1.setDato1(5);
	PC1.setDato2(9.97);
	
	cout<<endl;
	
	PC1.mostrarDatos();
	
	return 0;
}
