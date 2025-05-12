/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automatica.
 * - Si le pasamos "Hola mundo" nos retornaria "odnum aloH"
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
	char cadena[100];
	int lenght;
	
	cout<<"Digite una cadena: ";	cin.getline(cadena,100,'\n');
	lenght = strlen(cadena);		//Longitud de la cadena
	
	cout<<"\n> ";
	
	for(int i=lenght-1; i>=0; i--) {
		cout<<cadena[i];
	}
	
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
