//HERENCIA MULTIPLE
#include<iostream>
#include<string.h>
#include "Barco.h"
#include "Avion.h"
using namespace std;

class Hidroavion : public Barco , public Avion{
	private:
		string codigo;
	public:
		Hidroavion(string nombre, string modelo, string codigo) : Barco(nombre) , Avion(modelo){
			this->codigo = codigo;
		}
		
		~Hidroavion(){
			//DESTRUCTOR
		}
		
		void mostrarDatos(){
			cout<<"NOMBRE: "<<getNombre()<<endl;
			cout<<"MODELO: "<<getModelo()<<endl;
			cout<<"CODIGO: "<<codigo<<endl<<endl;
		}
		
		string getCodigo(){
			return codigo;
		}
};
//TODOS LOS CONSTRUCTORES Y HERENCIAS SE HACEN EN EL ORDEN EN QUE LAS LLAMAMOS
