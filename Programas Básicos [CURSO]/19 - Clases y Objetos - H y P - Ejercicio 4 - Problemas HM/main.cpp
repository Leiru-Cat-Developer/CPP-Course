#include<iostream>
#include "ClaseDerivada.h"
using namespace std;

int main(int argc, char** argv) {
	ClaseDerivada* CD1 = new ClaseDerivada(5,10,15);
	
	cout<<"VALOR X: "<<CD1->getX()<<endl;
	
	delete CD1;
	return 0;
}
