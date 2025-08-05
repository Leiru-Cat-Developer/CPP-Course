#include<iostream>
#include "SerVivo.h"
using namespace std;

class Planta : public SerVivo{
	public:
		void alimentarse(){
			cout<<"LA PLANTA SE ALIMENTA MEDIANTE LA FOTOSINTESIS"<<endl;
		}
};
