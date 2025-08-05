//ARREGLO DE OBJETOS

#include <iostream>
#include "alumno.h"

using namespace std;

int main(int argc, char** argv) {
	Alumno alumnos1[5];						//CREACION DE UN ARREGLO DE OBJETOS
	Alumno* alumnos2 = new Alumno[3];		//CREACION DE UN ARREGLO DE OBJETOS DINAMICO
	
	//USANDO EL ARREGLO DINAMICO
	for(int i=0; i<3; i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	
	cout<<"----- MOSTRANDO LAS NOTAS -----"<<endl<<endl;
	
	for(int i=0; i<3; i++){
		(alumnos2+i)->mostrarNotas();
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
