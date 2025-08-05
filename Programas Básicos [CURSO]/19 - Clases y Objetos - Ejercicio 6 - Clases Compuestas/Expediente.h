#include<iostream>

using namespace std;

class Expediente{
	private:
		int numeroExpediente;
	public:
		Expediente(int numeroExpediente){
			//CONSTRUCTOR 1
			this->numeroExpediente = numeroExpediente;
		}
		Expediente(){
			//CONSTRUCTOR 2
		}
		~Expediente(){
			//DESTRUCTOR
		}
		
		int getNumeroExpediente(){
			return numeroExpediente;
		}
};
