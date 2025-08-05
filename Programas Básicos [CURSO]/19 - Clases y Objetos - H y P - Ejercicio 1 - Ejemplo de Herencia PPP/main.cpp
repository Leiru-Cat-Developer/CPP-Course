#include<iostream>
#include<string.h>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"
using namespace std;

int main(int argc, char** argv) {
	//HERENCIA PUBLICA
	Turismo* T1 = new Turismo("Toyota","PLOMO","GH89",4);
	cout<<"///// HERENCIA PUBLICA /////"<<endl<<endl;
	cout<<"COLOR: "<<T1->getColor()<<endl;
	T1->setColor("NEGRO");
	cout<<"EL COLOR CAMBIO A: "<<T1->getColor()<<endl;
	cout<<"MODELO: "<<T1->retornarModelo()<<endl<<endl;
	
	//HERENCIA PRIVADA
	cout<<"///// HERENCIA PRIVADA /////"<<endl<<endl;
	Deportivo* D1 = new Deportivo("Audi","BLANCO","KP98",8);
	cout<<"CILINDRADA: "<<D1->getCilindrada()<<endl;
	cout<<"MARCA REPORTADA: "<<D1->reportarMarca()<<endl<<endl;
	
	//HERENCIA PROTEGIDA
	cout<<"///// HERENCIA PROTEGIDA /////"<<endl<<endl;
	Furgoneta* F1 = new Furgoneta("KIA","VERDE","AS12",1200);
	cout<<"CARGA: "<<F1->getCarga()<<endl;
	cout<<"COLOR REPORTADO: "<<F1->reportarColor()<<endl<<endl;
	
	delete T1;
	delete D1;
	delete F1;
	return 0;
}
/*
	POR SI QUEREMOS PROBAR A MANIPULAR EN HERENCIA PRIVADA
	-
		cout<<"MARCA: "<<D1->getMarca()<<endl<<endl;
	-
	
	POR SI QUEREMOS PROBAR A MANIPULAR EN HERENCIA PROTEGIDA
	-
		cout<<"COLOR: "<<F1->getColor()<<endl<<endl:
	-
*/
