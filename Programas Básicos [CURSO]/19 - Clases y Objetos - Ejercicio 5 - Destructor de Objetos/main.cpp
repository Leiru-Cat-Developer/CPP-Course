#include<iostream>
#include "Perro.h"

int main(int argc, char** argv) {
	//OBJETO DE TIPO ESTATICO
	Perro perro1("LOONA","MESTIZO");
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro();			//USAMOS EL DESTRUCTOR DEL OBJETO
	//OBJETO DE TIPO DINAMICO
	Perro* perro2 = new Perro("Fido","Doberman");
	perro2->mostrarDatos();
	perro2->jugar();
	delete perro2;				//USAMOS DELETE PARA TIPO DINAMICO
	
	//ES IMPORTANTE SABER QUE AL ELIMINAR, YA NO PODEMOS USAR
	system("pause");
	return 0;
}
