//MIEMBROS STATIC DE UNA CLASE

#include<iostream>
#include<string.h>
#include "Estatico.h"

using namespace std;

int main(int argc, char** argv) {
	Estatico* objeto1 = new Estatico();
	Estatico* objeto2 = new Estatico();
	Estatico* objeto3 = new Estatico();
	Estatico* objeto4 = new Estatico();
	
	cout<<objeto1->getContador()<<endl<<endl;
	
	cout<<"LA SUMA ES: "<<Estatico::sumar(10,20)<<endl<<endl;
	system("pause");
	return 0;
}
