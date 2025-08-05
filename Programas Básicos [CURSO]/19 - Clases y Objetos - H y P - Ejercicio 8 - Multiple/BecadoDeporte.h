#include<iostream>
#include<string.h>
#include "Alumno.h"
#include "Deportista.h"
using namespace std;

class BecadoDeporte : public Alumno, public Deportista{
	private:
		float montoBeca;
		
	public:
		BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca) : Alumno(nombreCarrera), Deportista(nombreEntrenador){
			this->montoBeca = montoBeca;
		}
		
		~BecadoDeporte(){
			//DESTRUCTOR
		}
		
		void mostrarDatos(){
			//USANDO EL OPERADOR DE RESOLUCION DE AMBITO "::"
			Alumno::mostrarDatos();
			Deportista::mostrarDatos();
			cout<<"MONTO BECA: $"<<montoBeca<<endl;
		}
		
		void setMontoBeca(float nuevoMontoBeca){
			float incremento = (montoBeca*nuevoMontoBeca)/100;
			this->montoBeca += incremento;
		}
		
		float getMontoBeca(){
			return montoBeca;
		}
};
