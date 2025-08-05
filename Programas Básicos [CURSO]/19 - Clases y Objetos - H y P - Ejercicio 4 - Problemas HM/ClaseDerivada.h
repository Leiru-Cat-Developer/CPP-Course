#include<iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"
using namespace std;

class ClaseDerivada : public ClaseBase1 , public ClaseBase2 {
	protected:
		int x;
	public:
		ClaseDerivada(int x1, int x2, int x) : ClaseBase1(x1) , ClaseBase2(x2){
			this->x = x;
		}
		
		~ClaseDerivada(){
			//DESTRUCTOR
		}
		
		int getX(){
			return ClaseBase1::getX();
		}
};
/*
	EN CASO DE QUE QUERAMOS PROBAR EL OPERADOR DE RESOLUCION DE AMBITO
	
		int getXBase1(){
			//OPERADOR DE RESOLUCION DE AMBITO
			return ClaseBase1::x;
		}
		
		int getXBase2(){
			//OPERADOR DE RESOLUCION DE AMBITO
			return ClaseBase2::x;
		}
*/
