#include<iostream>
#include "Poligono.h"
using namespace std;

class Rectangulo : public Poligono{
	private:
		float base, altura;
	public:
		Rectangulo(float base, float altura){
			this->base = base;
			this->altura = altura;
		}
		
		~Rectangulo(){
			//DESTRUCTOR
		}
		
		float perimetro(){
			float p = 2*base + 2*altura;
			return p;
		}
		
		float area(){
			float a = base*altura;
			return a;
		}
};
