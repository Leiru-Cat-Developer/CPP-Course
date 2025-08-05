/*
	SENTENCIA SWITCH [CONDICIONAL SIMPLE]
*/
#include<iostream>
using namespace std;
int main(){
	int numero = 0;
	cout<<"DIGITA UN NUMERO ENTRE 1 Y 5: ";	cin>>numero;
	switch(numero){
		case 1:	cout<<"EL NUMERO ES 1";				break;
		case 2:	cout<<"EL NUMERO ES 2";				break;
		case 3:	cout<<"EL NUMERO ES 3";				break;
		case 4:	cout<<"EL NUMERO ES 4";				break;
		case 5:	cout<<"EL NUMERO ES 5";				break;
		default:	cout<<"EL NUMERO ESTA FUERA DE RANGO";	break;
	}
	return 0;
}
