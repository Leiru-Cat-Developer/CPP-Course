/*
	ESCRIBA UN PROGRAMA QUE LEA DOS NUMEROS Y DETERMINE CUAL DE ELLOS ES
	EL MAYOR
*/
#include<iostream>
using namespace std;
int main(){
	int numero1 = 0, numero2 = 0;
	cout<<"DIGITE DOS NUMEROS: ";	cin>>numero1>>numero2;
	cout<<"--------------------------------------------------"<<endl;
	if(numero1 == numero2){
		cout<<"AMBOS NUMEROS SON IGUALES";
	}else if(numero1>numero2){
		cout<<"EL MAYOR NUMERO ES: "<<numero1;
	}else{
		cout<<"EL MAYOR NUMERO ES: "<<numero2;
	}
	return 0;
}
