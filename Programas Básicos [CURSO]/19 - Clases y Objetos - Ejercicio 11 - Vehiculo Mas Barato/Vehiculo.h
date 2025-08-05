#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
using namespace std;

class Vehiculo{
	//ATRIBUTOS
	private:
		string marca;
		string modelo;
		float precio;
	//METODOS
	public:
		Vehiculo(string marca, string modelo, float precio){
			//CONSTRUCTOR
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		
		Vehiculo(){
			//CONSTRUCTOR POR DEFECTO
		}
		
		~Vehiculo(){
			//DESTRUCTOR
		}
		
		void mostrarDatos();
		
		//GETTERS
		float getPrecio();
		
		//METODO ESTATICO
		static int indiceBarato(Vehiculo coches[], int n);
};
