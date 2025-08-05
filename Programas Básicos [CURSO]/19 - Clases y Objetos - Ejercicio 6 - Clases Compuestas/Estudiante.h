#include<iostream>
#include "Expediente.h"
#include "Direccion.h"

//CLASE COMPUESTA, PUES ENTRE SUS ATRIBUTOS TIENE METODOS DE OTRAS

using namespace std;

class Estudiante{
	private:
		string boleta;
		float promedio;
		Expediente exp;
		Direccion dir;
	public:
		Estudiante(string boleta, float promedio, int numeroExpediente, string direccion) : exp(numeroExpediente), dir(direccion){
			//CONSTRUCTOR
			this->boleta = boleta;
			this->promedio = promedio;
		}
		~Estudiante(){
			//DESTRUCTOR
		}
		void mostrarDatos(){
			cout<<"BOLETA: "<<boleta<<endl;
			cout<<"PROMEDIO: "<<promedio<<endl;
			cout<<"NUMERO DE EXPEDIENTE: "<<exp.getNumeroExpediente()<<endl;
			cout<<"DIRECCION: "<<dir.getDireccion()<<endl<<endl;
		}
};
