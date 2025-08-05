#include<iostream>
using namespace std;

//PLANTILLA DE CLASE
template <class T1, class T2>

//DEFINICION DE PLANTILLA DE CLASE
class PlantillaClase{
	private:
		T1 dato1;
		T2 dato2;
		
	public:
		PlantillaClase(T1 dato1, T2 dato2){
			//CONSTRUCTOR
			this->dato1 = dato1;
			this->dato2 = dato2;
		}
		
		~PlantillaClase(){
			//DESTRUCTOR
		}
		
		//SETTERS
		void setDato1(T1 x){
			this->dato1 = x;
		}
		
		void setDato2(T2 x){
			this->dato2 = x;
		}
		
		//GETTERS
		T1 getDato1(){
			return dato1;
		}
		
		T2 getDato2(){
			return dato2;
		}
		
		//METODOS
		void mostrarDatos(){
			cout<<"DATO 1: "<<dato1<<endl;
			cout<<"DATO 2: "<<dato2<<endl;
		}
};
