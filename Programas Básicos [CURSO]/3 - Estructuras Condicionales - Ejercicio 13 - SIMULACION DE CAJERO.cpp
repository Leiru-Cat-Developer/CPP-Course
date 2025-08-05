/*
	HACER UN PROGRAMA QUE SIMULE UN CAERO AUTOMATICO CON UN SALDO INICIAL
	DE 1000 DOLARES
*/
#include<iostream>
using namespace std;
int main(){
	int opcion = 0;
	float saldo = 1000, deposito = 0, retiro = 0;
	cout<<"----- BIENVENIDO AL BANCO -----"<<endl;
	cout<<"1. DEPOSITAR"<<endl;
	cout<<"2. RETIRAR"<<endl;
	cout<<"3. CONSULTAR"<<endl;
	cout<<"4. SALIR"<<endl;
	cout<<"DIGITE LA OPCION: ";	cin>>opcion;
	cout<<"--------------------------------"<<endl;
	switch(opcion){
		case 1:	cout<<"DIGITE LA CANTIDAD QUE DESEA DEPOSITAR: $";	cin>>deposito;
				saldo += deposito;
				cout<<"SU SALDO QUEDARIA: $"<<saldo; 
			break;
		case 2:	cout<<"DIGITE LA CANTIDAD QUE DESEA RETIRAR: $";	cin>>retiro;
				saldo -= retiro;
				cout<<"SU SALDO QUEDARIA: $"<<saldo;
			break;
		case 3:	cout<<"SU SALDO ACTUAL ES: $"<<saldo;
			break;
		case 4:	cout<<"SALIENDO ...";
			break;
		default:	cout<<"LA OPCION QUE DIGITO NO EXISTE";
			break;
	}
	return 0;
}
