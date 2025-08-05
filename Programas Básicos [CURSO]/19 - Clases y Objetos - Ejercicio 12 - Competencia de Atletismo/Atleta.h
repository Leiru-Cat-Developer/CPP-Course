#include<iostream>
#include<string.h>

using namespace std;

class Atleta{
	//ATRIBUTOS
	private:
		int numeroDeAtleta;
		string nombreAtleta;
		float tiempoCarreraAtleta;
	//METODOS
	public:
		Atleta(int numeroDeAtleta, string nombreAtleta, float tiempoCarreraAtleta){
			//CONSTRUCTOR
			this->numeroDeAtleta = numeroDeAtleta;
			this->nombreAtleta = nombreAtleta;
			this->tiempoCarreraAtleta = tiempoCarreraAtleta;
		}
		
		Atleta(){
			//CONSTRUCTOR POR DEFECTO
		}
		
		~Atleta(){
			//DESTRUCTOR
		}
		
		void mostrarDatosGanador();
		
		static int indiceAtletaGanador(Atleta atletas[], int n);
		
		//GETTERS
		float getTiempoCarrera();
};
