#include<iostream>
#include "Cuadrilatero.h"

using namespace std;

float Cuadrilatero::obtenerPerimetro(){
	float perimetro = 2*(lado1+lado2);
	return perimetro;
}

float Cuadrilatero::obtenerArea(){
	float area = (lado1 * lado2);
	return area;
}
