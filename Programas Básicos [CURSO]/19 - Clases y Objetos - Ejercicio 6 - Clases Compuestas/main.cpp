//CLASES COMPUESTAS
#include<iostream>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
	Estudiante* estudiante1 = new Estudiante("2020600608", 10, 2067, "VALLE DE CHALCO 2DA SECCION");
	estudiante1->mostrarDatos();
	system("pause");
	return 0;
}
