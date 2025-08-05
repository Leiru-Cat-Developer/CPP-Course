#include<iostream>
#include "Animal.h"
using namespace std;

class AnimalCarnivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"EL ANIMAL CARNIVORO SE ALIMENTA DE CARNE"<<endl;
		}
};
