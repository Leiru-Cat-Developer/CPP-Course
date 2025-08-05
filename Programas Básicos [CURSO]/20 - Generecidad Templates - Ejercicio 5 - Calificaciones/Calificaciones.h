#include<iostream>
#include<string.h>
using namespace std;

//PLANTILLA DE CLASE
template <class T>

//DEFINICION DE PLANTILLA DE CLASE
class Materia{
	private:
		string nombreMateria;
		int clave;
		T calificacion;
	
	public:
		Materia(string nombreMateria, int clave, T calificacion){
			this->nombreMateria = nombreMateria;
			this->clave = clave;
			this->calificacion = calificacion;
		}
		
		~Materia(){
			//DESTRUCTOR
		}
		
		void mostrarDatos(){
			cout<<"NOMBRE MATERIA: "<<nombreMateria<<endl;
			cout<<"CLAVE MATERIA: "<<clave<<endl;
			cout<<"CALIFICACION: "<<calificacion<<endl;
		}
		
		void setCalificacion(T x){
			this->calificacion = x;
		}
		
		T getCalificacion(){
			return calificacion;
		}
};
