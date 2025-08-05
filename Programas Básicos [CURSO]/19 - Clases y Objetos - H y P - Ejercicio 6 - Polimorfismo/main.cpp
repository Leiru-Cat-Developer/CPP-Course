#include<iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main(int argc, char** argv) {
	Poligono* P[2];
	
	P[0] = new Rectangulo(7,4);
	P[1] = new Triangulo(3,4,4);
	
	for(int i=0; i<2; i++){
		cout<<"AREA: "<<P[i]->area()<<endl;
		cout<<"PERIMETRO: "<<P[i]->perimetro()<<endl<<endl;
	}
	
	return 0;
}
