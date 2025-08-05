/*
	ESCRIBA UN PROGRAMA QUE CALCULE EL VALOR DE 1+3+5+...+2N-1
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros = 0, resultado = 0;
	cout<<"DIGITE LA CANTIDAD DE NUMEROS: ";	cin>>numeros;
	cout<<"--------------------------------"<<endl;
	for(int i=1; i<=2*numeros-1; i+=2){
		resultado += i;
	}
	cout<<"EL RESTULTADO ES: "<<resultado;
	getch();
	return 0;
}
