/*
	ESCRIBA UN PROGRAMA QUE LEA TRES NUMEROS Y DETERMINE CUAL DE ELLOS ES
	EL MAYOR
*/
#include<iostream>
using namespace std;
int main(){
	int numero1 = 0, numero2 = 0, numero3 = 0;
	cout<<"DIGITE TRES NUMEROS: ";	cin>>numero1>>numero2>>numero3;
	cout<<"--------------------------------"<<endl;
	if((numero1 == numero2)&&(numero1 == numero3)&&(numero2 == numero3)){
		cout<<"LOS TRES NUMEROS SON IGUALES";
	}else if((numero1 > numero2)&&(numero1 > numero3)){
		cout<<"EL NUMERO DE MAYOR VALOR ES: "<<numero1;
	}else if((numero2 > numero1)&&(numero2 > numero3)){
		cout<<"EL NUMERO DE MAYOR VALOR ES: "<<numero2;
	}else{
		cout<<"EL NUMERO DE MAYOR VALOR ES: "<<numero3;
	}
	return 0;
}
