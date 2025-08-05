/*
	ESCRIBA UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR UN CARACTER E INDIQUE
	EN LA SALIDA ESTANDAR SI EL CARACTER ES UNA VOCAL MINUSCULA, ES UNA VOCAL
	MAYUSCULA O NO ES UNA VOCAL
*/
#include<iostream>
using namespace std;
int main(){
	char letra;
	cout<<"DIGITE UN CARACTER: ";	cin>>letra;
	cout<<"--------------------------------"<<endl;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"ES UNA VOCAL MINUSCULA";				break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	cout<<"ES UNA VOCAL MAYUSCULA";				break;
		default:	cout<<"NO ES UNA VOCAL MINUSCULA O MAYUSCULA";	break;
	}
	return 0;
}
