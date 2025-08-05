/*
	ESCRIBA UN PROGRAMA QUE CALCULE EL VALOR DE: 2^1+2^2+2^3+...+2^N
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int potencia = 0, resultado = 0;
	cout<<"DIGITE EL LIMITE DE LA POTENCIA: ";	cin>>potencia;
	for(int i=1; i<=potencia; i++){
		resultado += pow(2,i);
	}
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"EL RESULTADO ES: "<<resultado<<endl<<endl;
	system("pause");
	return 0;
}
