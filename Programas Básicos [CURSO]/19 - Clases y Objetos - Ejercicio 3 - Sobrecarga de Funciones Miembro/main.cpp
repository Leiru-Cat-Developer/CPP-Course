#include<iostream>
#include "persona.h"

using namespace std;

int main(int argc, char** argv) {
	Persona* persona1 = new Persona("URIEL",22);
	Persona* persona2 = new Persona("MAAU010306HMCLVRA0");
	persona1->correr();
	persona2->correr(1500);
	system("pause");
	return 0;
}
