#include<iostream>

using namespace std;

class Direccion{
	private:
		string direccion;
	public:
		Direccion(string direccion){
			//CONSTRUCTOR 1
			this->direccion = direccion;
		}	
		Direccion(){
			//CONSTRUCTOR 2
		}
		~Direccion(){
			//DESTRUCTOR
		}
		
		string getDireccion(){
			return direccion;
		}
};
