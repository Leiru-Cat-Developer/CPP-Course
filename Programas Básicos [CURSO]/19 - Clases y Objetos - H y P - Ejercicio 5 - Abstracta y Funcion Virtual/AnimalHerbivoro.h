#include<iostream>
#include "Animal.h"
using namespace std;

class AnimalHerbivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"EL ANIMAL HERBIVORO SE ALIMENTA DE HIERBAS"<<endl;
		}
};
