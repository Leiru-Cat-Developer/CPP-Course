#include<iostream>
#include "alumno.h"

using namespace std;

void Alumno::pedirDatos(){
	cout<<"DIGITE LA CALIFICACION DE MATEMATICAS: "; 	cin>>calificacionMatematicas;
	cout<<"DIGITE LA CALIFICACION DE PROGRAMACION: "; 	cin>>calificacionProgramacion;
}

void Alumno::mostrarNotas(){
	cout<<"NOTA DE MATEMATICAS: "<<calificacionMatematicas<<endl;
	cout<<"NOTA DE PROGRAMACION: "<<calificacionProgramacion<<endl<<endl;
	cout<<"PROMEDIO: "<<(calificacionMatematicas+calificacionProgramacion)/2<<endl<<endl;
}
