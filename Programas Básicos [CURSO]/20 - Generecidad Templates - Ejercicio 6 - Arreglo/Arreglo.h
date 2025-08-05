#include<iostream>
using namespace std;

//PLANTILLA DE CLASE
template <class T>

//DEFINICION DE PLANTILLA DE CLASE
class Arreglo{
	private:
		T* arreglo;
		int indice;
		int numeroDeElementos;
		
	public:
		Arreglo(int n){
			arreglo = new T[n];
			indice = 0;
			numeroDeElementos = n;
		}
		
		~Arreglo(){
			//DESTRUCTOR
			delete[] arreglo;
		}
		
		void agregar(T elemento){
			arreglo[indice++] = elemento;
		}
		
		bool comprobarEspacio(){
			if(indice >= numeroDeElementos){
				return true;
			}else{
				return false;
			}
		}
		
		void mostrarArreglo(){
			for(int i=0; i<indice; i++){
				cout<<"ELEMENTO ["<<i<<"]: "<<arreglo[i]<<endl;
			}
		}
		
		void vaciarArreglo(){
			for(int i=0; i<indice; i++){
				arreglo[i] = NULL;
			}
			indice = 0;
		}
};
