/*
	TYPENAME - PARA PLANTILLAS DE FUNCIONES
	CLASS - PARA PLANTILLAS DE CLASES
	
	SE PUEDEN USAR COMO SEA, PERO POR SI ACASO
*/

#include<iostream>
#include "Mayor.h"
using namespace std;

int main(int argc, char** argv) {
	cout<<"EL MAYOR DE 2 NUMEROS ENTEROS ES: "<<mayor(6,9.8)<<endl;
	cout<<"EL MAYOR DE 2 NUMEROS REALES ES: "<<mayor(9.87,2.99)<<endl;
	cout<<"EL MAYOR DE 2 CARACTERES ES: "<<mayor('R','Z')<<endl;
	return 0;
}
