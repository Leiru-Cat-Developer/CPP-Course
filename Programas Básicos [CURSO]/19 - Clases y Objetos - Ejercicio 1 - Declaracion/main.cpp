//CREACION DE OBJETOS
//VISIBILIDAD DE LOS MIEMBROS DE LA CLASE (ENCAPSULAMIENTO) [PRIVATE, PUBLIC, PROTECTED]

#include<iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv){
	Punto p1(3,3);					//CREACION DE UN OBJETO ESTATICO
	cout<<"EL VALOR DE X ES: "<<p1.getX()<<endl<<endl;
	cout<<"EL VALOR DE Y ES: "<<p1.getX()<<endl<<endl;
	
	Punto* p2 = new Punto();		//CREACION DE UN OBJETO DINAMICO
	p2->setX(5);
	p2->setY(10);
	cout<<"EL VALOR DE X ES: "<<p2->getX()<<endl<<endl;
	cout<<"EL VALOR DE Y ES: "<<p2->getY()<<endl<<endl;
	return 0;
}
