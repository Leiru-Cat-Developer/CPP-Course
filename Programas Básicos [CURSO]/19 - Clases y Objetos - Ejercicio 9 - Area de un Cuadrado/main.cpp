#include<iostream>
#include "Cuadrilatero.h"

using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero* c1;
	
	float lado1, lado2;
	
	cout<<"DIGITE EL VALOR DEL LADO 1: ";	cin>>lado1;
	cout<<"DIGITE EL VALOR DEL LADO 2: ";	cin>>lado2;
	
	if(lado1 == lado2){
		//SIGNIFICA QUE ES UN CUADRADO
		c1 = new Cuadrilatero(lado1);
	}else{
		//SIGNIFICA QUE NO ES UN CUADRADO
		c1 = new Cuadrilatero(lado1,lado2);
	}
	
	cout<<endl<<"EL PERIMETRO ES: "<<c1->obtenerPerimetro()<<endl;
	cout<<"EL AREA ES: "<<c1->obtenerArea()<<endl<<endl;
	system("pause");
	return 0;
}
