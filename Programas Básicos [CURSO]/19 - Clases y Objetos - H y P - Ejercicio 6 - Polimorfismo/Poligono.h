//CLASE ABSTRACTA
#ifndef POLIGONO_H
#define POLIGONO_H
#include<iostream>
using namespace std;

class Poligono{
	public:
		virtual float perimetro() = 0;
		virtual float area() = 0;
};
#endif
