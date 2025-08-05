#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
template <typename T1, typename T2>

//DECLARACION CON LAS PLANTILLAS DE FUNCIONES
T1 mayor(T1 dato1, T2 dato2){
	if(dato1 >= dato2){
		return dato1;
	}else{
		return dato2;
	}
}

//ESTE CODIGO SE PUEDE O NO USAR EN UN HEADER FILE
