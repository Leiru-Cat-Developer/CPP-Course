#include<iostream>
#include<string.h>
using namespace std;

class Barco{
	private:
		string nombre;
	public:
		Barco(string nombre){
			this->nombre = nombre;
		}
		
		~Barco(){
			//DESTRUCTOR
		}
		
		void indicarBarco(){
			cout<<"DESPLAZAMIENTO POR AGUA"<<endl;
		}
		
		string getNombre(){
			return nombre;
		}
};
