/*
	REALICE UN PROGRAMA QUE LEA UN VALOR ENTERO Y DETERMINE SI SE TRATA
	DE UN NUMERO PAR O IMPAR
*/
#include<iostream>
using namespace std;
int main(){
	int numero = 0;
	cout<<"DIGITE UN NUMERO: ";	cin>>numero;
	cout<<"--------------------------------"<<endl;
	if(numero == 0){
		cout<<"EL NUMERO ES CERO";
	}else if((numero%2)==0){
		cout<<"EL NUMERO: "<<numero<<", ES PAR";
	}else{
		cout<<"EL NUMERO: "<<numero<<", ES IMPAR";
	}
	return 0;
}
