#include<iostream>

using namespace std;

class Cuadrilatero{
	//ATRIBUTOS
	private:
		float lado1, lado2;
	//METODOS
	public:
		Cuadrilatero(float lado1, float lado2){
			//CONSTRUCTOR 1
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		Cuadrilatero(float lado){
			//CONSTRUCTOR 2
			this->lado1 = this->lado2 = lado;
		}
		float obtenerPerimetro();
		float obtenerArea();
};
