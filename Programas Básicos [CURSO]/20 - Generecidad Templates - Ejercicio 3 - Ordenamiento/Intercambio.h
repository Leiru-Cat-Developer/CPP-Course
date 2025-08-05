#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
template <typename T>

//DEFINICION DE PLANTILLAS DE FUNCIONES
void intercambiarDatos(T &dato1, T &dato2){
	T auxiliar;
	
	//METODO DE INTERCAMBIO
	auxiliar = dato1;
	dato1 = dato2;
	dato2 = auxiliar;
}
