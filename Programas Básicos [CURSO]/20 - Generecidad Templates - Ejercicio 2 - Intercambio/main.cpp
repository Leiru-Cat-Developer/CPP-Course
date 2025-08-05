/*
	DEFINIR UNA PLANTILLA DENTRO DE UN ARCHIVO DE CABECERA LLAMADO
	"INTERCAMBIO.H" QUE PUEDA INTERCAMBIAR EL VALOR DE 2 ELEMENTOS
	DEL MISMO TIPO
*/
#include<iostream>
#include "Intercambio.h"
using namespace std;

int main(int argc, char** argv) {
	float dato1, dato2;
	cout<<"DIGITE 2 DATOS: ";	cin>>dato1>>dato2;	cout<<endl;
	//LLAMADA DE LA FUNCION PARA INTERCAMBIAR VALORES
	intercambiarDatos(dato1, dato2);
	cout<<"VALOR NUEVO DATO 1: "<<dato1<<endl;
	cout<<"VALOR NUEVO DATO 2: "<<dato2<<endl;
	return 0;
}
