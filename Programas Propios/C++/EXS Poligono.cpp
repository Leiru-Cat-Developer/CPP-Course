/*
 * Crea una unica funcion (importante que solo sea una) que sea capaz
 * de calcular y retornar el area de un poligono.
 * - La funcion recibira por parametro solo UN poligono a la vez.
 * - Los poligonos soportados seran Triangulo, Cuadrado y Rectangulo.
 * - Imprime el calculo del area de un poligono de cada tipo.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Figura{
	public:
		virtual float calcularArea() = 0;	//Metodo Virtual
};

class Triangulo : public Figura{
	private:
		float base;
		float altura;
	public:
		Triangulo(float _base,
				  float _altura):
				  					base(_base),
				  					altura(_altura){}
		
		float calcularArea();
};

float Triangulo::calcularArea() {
	return (base*altura)/2;
}

class Cuadrado : public Figura{
	private:
		float lado;
	public:
		Cuadrado(float _lado): lado(_lado){}
		
		float calcularArea();
};

float Cuadrado::calcularArea() {
	return (lado*lado);
}

class Rectangulo : public Figura{
	private:
		float base;
		float altura;
	public:
		Rectangulo(float _base,
				  float _altura):
				  					base(_base),
				  					altura(_altura){}
		
		float calcularArea();
};

float Rectangulo::calcularArea() {
	return (base*altura);
}

//Prototipo de funciones
float areaPoligono(Figura* figura);

int main() {
	Triangulo t(12,8);
	Cuadrado c(5);
	Rectangulo r(12,9);
	
	cout<<"El area del triangulo es: "<<areaPoligono(&t)<<endl;
	cout<<"El area del cuadrado es: "<<areaPoligono(&c)<<endl;
	cout<<"El area del rectangulo es: "<<areaPoligono(&r)<<endl<<endl;
	
	system("pause");
	return 0;
}

//Definicion de funciones
float areaPoligono(Figura* figura) {
	return figura->calcularArea();
}
