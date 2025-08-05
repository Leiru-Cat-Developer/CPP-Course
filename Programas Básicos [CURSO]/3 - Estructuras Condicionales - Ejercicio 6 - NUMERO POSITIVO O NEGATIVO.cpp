/*
	COMPROBAR SI UN NUMERO DIGITADO POR EL USUARIO ES POSITIVO O NEGATIVO
*/
#include<iostream>
using namespace std;
int main(){
	int numero = 0;
	cout<<"DIGITE UN NUMERO: ";	cin>>numero;
	cout<<"--------------------------------"<<endl;
	if(numero == 0){
		cout<<"EL NUMERO ES CERO";
	}else if(numero > 0){
		cout<<"EL NUMERO ES POSITIVO";
	}else if(numero < 0){
		cout<<"EL NUMERO ES NEGATIVO";
	}
	return 0;
}
