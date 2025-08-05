/*
	HACER UN MENU QUE CONSIDERE LAS SIGUIENTES OPCIONES
		- CUBO DE UN NUMERO
		- NUMERO PAR O IMPAR
		- SALIR
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int opcion = 0, numero = 0, numeroCubico = 0;
	cout<<"1. CUBO DE UN NUMERO"<<endl;
	cout<<"2. NUMERO PAR O IMPAR"<<endl;
	cout<<"3. SALIR"<<endl<<endl;
	cout<<"DIGITE LA OPCION: ";	cin>>opcion;
	cout<<"--------------------------------"<<endl;
	switch(opcion){
		case 1:	cout<<"DIGITE EL NUMERO QUE DESEA ELEVAR AL CUBO: ";	cin>>numero;
				numeroCubico = pow(numero,3);
				cout<<"EL NUMERO "<<numero<<", al cubo es: "<<numeroCubico;
			break;
		case 2:	cout<<"DIGITE UN NUMERO: ";	cin>>numero;
				if((numero%2)==0){
					cout<<"EL NUMERO ES PAR";
				}else{
					cout<<"EL NUMERO ES IMPAR";
				}
			break;
		case 3:	cout<<"SALIENDO ...";
			break;
		default:	cout<<"LA OPCION NO EXISTE";
			break;
	}
	return 0;
}
