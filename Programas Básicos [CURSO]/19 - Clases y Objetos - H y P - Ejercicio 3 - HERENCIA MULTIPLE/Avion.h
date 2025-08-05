#include<iostream>
#include<string.h>
using namespace std;

class Avion{
	private:
		string modelo;
	public:
		Avion(string modelo){
			this->modelo = modelo;
		}
		
		~Avion(){
			//DESTRUCTOR
		}
		
		void indicarAvion(){
			cout<<"DESPLAZAMIENTO POR AIRE"<<endl;
		}
		
		string getModelo(){
			return modelo;
		}
};
