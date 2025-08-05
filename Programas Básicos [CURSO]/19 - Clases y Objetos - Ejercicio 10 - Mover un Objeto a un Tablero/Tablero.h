#include<iostream>

using namespace std;

class Tablero{
	//ATRIBUTOS
	private:
		int x, y;
	//METODOS
	public:
		Tablero(int x, int y){
			//CONSTRUCTOR
			this->x = x;
			this->y = y;
		}
		
		void moverArriba(int);
		void moverAbajo(int);
		void moverDerecha(int);
		void moverIzquierda(int);
		
		//GETTERS
		int getX();
		int getY();
};
