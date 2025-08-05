/*
	HACER UN PROGRAMA QUE CALCULE EL RESULTADO DE LA SIGUIENTE EXPRESION:
	1-2+3-4+5-6...N
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int limite = 0, sumaPositivos = 0, sumaNegativos = 0, resultado = 0;
	cout<<"DIGITE EL LIMITE DE LA OPERACION: ";	cin>>limite;
	for(int i=1; i<=limite; i++){
		if(i%2!=0){
			//IMPAR
			sumaNegativos += i;
		}
		if(i%2==0){
			//PAR
			sumaPositivos += i;
		}
	}
	resultado = sumaNegativos - sumaPositivos;
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"EL RESULTADO ES: "<<resultado<<endl<<endl;
	system("pause");
	return 0;
}
