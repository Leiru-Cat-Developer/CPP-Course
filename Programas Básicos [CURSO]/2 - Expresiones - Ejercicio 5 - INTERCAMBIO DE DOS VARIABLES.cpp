/*
	ESCRIBA UN FRAGMENTO DE PROGRAMA QUE INTERCAMBIE LOS VALORES DE DOS VARIABLES
*/
#include<iostream>
using namespace std;
int main(){
	int valor1 = 10, valor2 = 20, auxiliar = 0;
	cout<<"VALOR 1: "<<valor1<<endl;
	cout<<"VALOR 2: "<<valor2<<endl;
	cout<<"--------------------------------------------------"<<endl;
	auxiliar = valor1;	//0 = 10 POR LO TANTO "AUXILIAR = 10, VALOR1 = 10"
	valor1 = valor2;	//10 = 20 POR LO TANTO "VALOR1 = 20, VALOR2 = 20"
	valor2 = auxiliar;	//20 = 10 POR LO TANTO "VALOR2 = 20, AUXILIAR = 10"
	cout<<"NUEVO VALOR 1: "<<valor1<<endl;
	cout<<"NUEVO VALOR 2: "<<valor2;
	return 0;
}
