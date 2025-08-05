//FUNCIONES AMIGAS (friend)
#include <iostream>
#include "Personaje.h"

using namespace std;

//FUNCION PARA MODIFICAR LOS VALORES DEL OBJETO PERSONAJE
void modificar(Personaje &p, int at, int def){
	p.ataque = at;
	p.defensa = def;
}

int main(int argc, char** argv) {
	Personaje* principal = new Personaje(100,100);
	//MOSTRAMOS EL OBJETO NORMAL
	principal->mostrarDatos();
	//MODIFICAMOS EL OBJETO
	modificar(*principal,60,50);
	//MOSTRAMOS EL OBJETO MODIFICADO
	principal->mostrarDatos();
	system("pause");
	return 0;
}
