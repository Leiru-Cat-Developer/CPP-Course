/*
 * Crea un programa se encargue de transformar un numero
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int binario = 0;
	int espacios = 0;
	
	int vector[255];
	int v = 0;
	
	cout<<"Escriba un numero en decimal: ";	cin>>binario;	cout<<endl;
	
	//Llena el arreglo con todos los elementos del numero binario
	while(binario != 0) {
		vector[v] = binario%2;
		v++;
		binario /= 2;
	}
	
	//Imprime el numero al revez
	for (int i=v-1; i>=0; i--) {
		cout<<vector[i];
		
		espacios++;
		if ((espacios == 4)&&(i!=0)) {
			cout<<" ";
			espacios = 0;
		}
	}
	
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
