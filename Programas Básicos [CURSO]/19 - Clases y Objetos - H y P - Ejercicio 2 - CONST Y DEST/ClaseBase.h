#include<iostream>
using namespace std;

class ClaseBase{
	private:
		int numero;
	public:
		ClaseBase(int numero){
			this->numero = numero;
			cout<<"CONSTRUCTOR DE LA CLASE BASE"<<endl;
		}
		
		~ClaseBase(){
			//DESTRUCTOR
			cout<<"DESTRUCTOR DE LA CLASE BASE"<<endl;
		}
};
