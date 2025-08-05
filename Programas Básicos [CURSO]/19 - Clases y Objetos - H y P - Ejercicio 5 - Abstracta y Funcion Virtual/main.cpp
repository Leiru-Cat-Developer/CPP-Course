#include<iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbivoro.h"
using namespace std;

int main(int argc, char** argv) {
	Planta* P1 = new Planta();
	AnimalCarnivoro* AC1 = new AnimalCarnivoro();
	AnimalHerbivoro* AH1 = new AnimalHerbivoro();
	
	P1->alimentarse();
	AC1->alimentarse();
	AH1->alimentarse();
	
	delete P1;
	delete AC1;
	delete AH1;
	return 0;
}
