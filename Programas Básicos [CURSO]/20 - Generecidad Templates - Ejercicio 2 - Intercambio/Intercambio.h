#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
template <typename T1>

//DECLARACION DE PLANTILLAS DE FUNCIONES
void intercambiarDatos(T1 &dato1, T1 &dato2){
	/*
		SE PASA EL DATO1 Y DATO2 POR REFERENCIA PARA QUE EL CAMBIO SE VEA EN CUALQUIER LADO
	*/
	T1 x;
	x = dato1;
	dato1 = dato2;
	dato2 = x;
}
