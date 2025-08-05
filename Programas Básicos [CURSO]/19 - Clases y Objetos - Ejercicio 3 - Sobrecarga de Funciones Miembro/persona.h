//IMPLEMENTACION DE LA CLASE PERSONA

/*
	LA SOBRECARGA DE METODOS SE DEBE DIFERENCIAR DE LA CANTIDAD DE METODOS QUE TIENE
	CADA UNO DE LOS METODOS
*/
#include<iostream>

using namespace std;

class Persona{
	//ATRIBUTOS
	private:
		string nombre;
		int edad;
		string curp;
	//METODOS
	public:
		Persona(string _nombre, int _edad){
			//CONSTRUCTOR 1
			nombre = _nombre;
			edad = _edad;
		}
		Persona(string _curp){
			//CONSTRUCTOR 2
			curp = _curp;
		}
		void correr(){
			cout<<"SOY "<<nombre<<", TENGO "<<edad<<" ANIOS Y ESTOY CORRIENDO UN MARATON"<<endl<<endl;
		}
		void correr(int km){
			cout<<"HE CORRIDO "<<km<<" KILOMETROS"<<endl<<endl;
		}
};
