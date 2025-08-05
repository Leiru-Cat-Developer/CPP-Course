/*
	DEFINA UNA PLANTILLA PARA LA CLASE MATERIA, DE TAL MANERA QUE EL TIPO
	DE DATO DEL ATRIBUTO CALIFICACION SEA DEL TIPO T. ESTO PERMITIRA CREAR
	OBJETOS DE TIPO MATERIA QUE TENGAN CALIFICACIONES QUE SEAN NUMEROS,
	DECIMALES Y LETRAS.
	
		a) CREAR UN OBJETO DE TIPO MATERIA USANDO EL TIPO INT, IMPRIMA LOS VALORES
		   DEL OBJETO CREADO
		
		b) CREAR UN OBJETO DE TIPO MATERIA USANDO EL TIPO FLOAT
		
		c) CREAR UN OBJETO DE TIPO MATERIA USANDO EL TIPO CHAR
		
		d) INCLUYA UN METODO DE CLASE QUE PERMITA MODIFICAR LA CALIFICACION DE UNA MATERIA
*/
#include<iostream>
#include<string.h>
#include "Calificaciones.h"
using namespace std;

int main(int argc, char** argv) {
	Materia <int> MT1("MATEMATICAS",225,7);
	Materia <float> MT2("FISICA",679,6.66);
	Materia <char> MT3("INGLES",450,'A');
	
	MT1.mostrarDatos();		cout<<endl;
	MT2.mostrarDatos();		cout<<endl;
	MT3.mostrarDatos();		cout<<endl;
	
	//MODIFICANDO DATOS
	MT1.setCalificacion(10);
	
	cout<<"\\\\ DATOS CORREGIDOS ////"<<endl<<endl;
	MT1.mostrarDatos();
	
	return 0;
}
